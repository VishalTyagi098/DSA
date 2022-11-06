#include<iostream>
using namespace std;
 
// Binary tree's Node structure
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
};

// function to create a newNode
struct Node* newNode(int newData){
  struct Node* node=(struct Node*)malloc(sizeof(struct Node));
  node->data=newData;
  node->left=NULL;
  node->right=NULL;
  return (node);
} 

// Function to build the tree
Node* buildTree(struct Node* root){
  // create root node first
  cout<<"Enter node data: "<<endl;
  int newData;
  cin>>newData;
  root=newNode(newData);

  // to insert NULL
  if(newData==-1){
    return NULL;
  }

  // Recursive function to insert elements on left side of a node
  cout<<"Enter data for inserting on left side of "<<newData<<endl;
  root->left=buildTree(root->left);

  // Recursive function to insert elements on right side of a node
  cout<<"Enter data for inserting on right side of "<<newData<<endl;
  root->right=buildTree(root->right);

  return root;
}


// IN order traversal
void inOrderTraversal(Node* root){
  if(root==NULL){
    return;
  }

  inOrderTraversal(root->left);
  cout<<root->data<<" ";
  inOrderTraversal(root->right);
}

int main()
{
  // initially root =null
  struct Node* root=NULL;
  root=buildTree(root);
  
  // 1 2 -1 -1 3 -1 -1

  inOrderTraversal(root);
  
  return 0;
}