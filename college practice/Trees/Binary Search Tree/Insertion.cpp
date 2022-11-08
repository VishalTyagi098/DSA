#include<iostream>
using namespace std;
 
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
};

Node* newNode(int newData){
  struct Node* node=(struct Node*)malloc(sizeof(struct Node));
  node->data=newData;
  node->left=NULL;
  node->right=NULL;
  return node;
}

// insertion algorithm
Node* insertInBST(struct Node* root,int newData){
  if(root==NULL){
    root=newNode(newData);
    return root;
  }

  if(newData<root->data){
    root->left=insertInBST(root->left,newData);
  }
  else{
    root->right=insertInBST(root->right,newData);
  }

  return root;
}

// function to take input
void inputData(struct Node* &root){
  int data;
  //to insert data once
  cin>>data;
  while(data!=-1){
    root=insertInBST(root,data);
    //to insert consecutive data
    cin>>data;
  }

}

// inOrder Traversal to print tree data
void inOrderTraversal(struct Node* root){
  if(root==NULL){
    return;
  }

  inOrderTraversal(root->left);
  cout<<root->data<<" ";
  inOrderTraversal(root->right);
}

 
int main()
{
  struct Node* root=NULL;

  cout<<"insert data"<<endl;
  inputData(root);

  inOrderTraversal(root);
  return 0;
}