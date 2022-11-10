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

 
int main()
{
  struct Node* root=NULL;

  cout<<"input data:"<<endl;
  root=inputTree(root);
  
  inOrderTraversal(root);
    return 0;
}