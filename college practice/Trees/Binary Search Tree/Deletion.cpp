#include<iostream>
using namespace std;
 
//  Create Node
struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* newNode(int newData){
  struct Node* node=(struct Node*)malloc(sizeof(struct Node));
  node->data=newData;
  node->left=NULL;
  node->right=NULL;
  return node;
}

// Traversal
void inOrderTraversal(struct Node* root){
  if(root==NULL){
    return;
  }
  inOrderTraversal(root->left);
  cout<<root->data<<" ";
  inOrderTraversal(root->right);
}

// insertion 

Node* insertInBST(struct Node* root,int newData){
  // base case
  if(root==NULL){
    root=newNode(newData);
    return root;
  }

  // conditions
  if(newData< root->data){
    root->left=insertInBST(root->left,newData);
  }
  else{
    root->right=insertInBST(root->right,newData);
  }

  return root;
}

Node* inputTree(struct Node* &root){
  int newData;
  cin>>newData;
  while(newData!=-1){
    root=insertInBST(root,newData);
    cin>>newData;
  }
  return root;
}


// max and min function
Node* minValue(struct Node* root){
  struct Node* temp=root;
  while(temp->left!=NULL){
    temp=temp->left;
  }
  return temp;
}
Node* maxValue(struct Node* root){
  struct Node* temp=root;
  while(temp->right!=NULL){
    temp=temp->right;
  }
  return temp;
}


// deletion
Node* deleteInBST(struct Node* root,int key){
  // base case
  if(root==NULL){
    return root;
  }

  // conditions
  if(root->data==key){
    // 0 child :-
    if(root->left==NULL && root->right==NULL){
      free(root);
      return NULL;
    }

    // 1 child:-
      // left child
    if(root->left!= NULL && root->right == NULL){
      struct Node* temp=root->left;
      free(root);
      return temp;
    }
      // right child
    if(root->left== NULL && root->right != NULL){
      struct Node* temp=root->right;
      free(root);
      return temp;
    }


    // 2 children:-
    if(root->left!=NULL && root->right!=NULL){
      int mini=minValue(root->right)->data;
      root->data=mini;
      root->right=deleteInBST(root->right,mini);
      return root;
    }
  }

  else if(key<root->data){
    root->left=deleteInBST(root->left,key);
    return root;
  }
  else {
    root->right=deleteInBST(root->right,key);
    return root;
  }
}
 
int main()
{
  struct Node* root=NULL;

  cout<<"input data:"<<endl;
  root=inputTree(root);
  
  inOrderTraversal(root);
  cout<<endl<<minValue(root)->data;
  cout<<endl<<maxValue(root)->data;

  cout<<endl;
  cout<<endl;
  deleteInBST(root,2);
  inOrderTraversal(root);
    return 0;
}