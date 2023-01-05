#include<iostream>
using namespace std;
 
struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* newNode(int data){
  struct Node* root=(struct Node*)malloc(sizeof(struct Node));
  root->data=data;
  root->left=NULL;
  root->right=NULL;
  return root;
}

Node* insertInBST(struct Node* root,int newData){
  if(root==NULL){
    root=newNode(newData);
    return root;
  }
  if(root->data > newData){
    root->left=insertInBST(root->left,newData);
  }
  else{
    root->right=insertInBST(root->right,newData);
  }
  return root;
}

void inputData(struct Node* &root){
  int data;
  cin>>data;
  while(data!=-1){
    root=insertInBST(root,data);
    cin>>data;
  }
}

Node* deletionInBST(struct Node* root,int key){
  // base cases
  if(root==NULL){
    return root;
  }

  // conditions
  if(root->data==key){
    // 0 child
    if(root->left==NULL && root->right==NULL){
      free(root);
      return NULL;
    }
    // 1 Child
    if(root->left==NULL && root->right != NULL){
      struct Node* temp=root->right;
      free(root);
      return temp;
    }
    if(root->left!=NULL && root->right == NULL){
      struct Node* temp=root->left;
      free(root);
      return temp;
    }

    // 2 children
    if(root->left!=NULL && root->right != NULL){
      int maxi=max(root->left)->data;
      root->data=maxi;
      root->left=deleteInBST(root->left,key);
      return root;
    }
  }

  // base cases
  else if(root->data>key){
    root->left=deletionInBST(root->left,key);
  }
  else{
    root->right=deletionInBST(root->right,key);
  }
}
 
int main()
{
    return 0;
}