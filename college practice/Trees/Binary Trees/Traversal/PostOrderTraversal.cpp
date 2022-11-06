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

  return (node);
}

Node* buildTree(struct Node* root){
  int newData;
  cout<<"Enter data: "<<endl;
  cin>>newData;
  root=newNode(newData);

  if(newData==-1){
    return NULL;
  }
  
  cout<<"Type data on left side of "<<newData<<endl;
  root->left=buildTree(root->left);
  cout<<"Type data on right side of "<<newData<<endl;
  root->right=buildTree(root->right);

  return root;
}

void postOrderTraversal(Node* root){
  if(root==NULL){
    return;
  }

  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout<<root->data<<" ";
}
 
int main()
{
  struct Node* root=NULL;
  root=buildTree(root);
  postOrderTraversal(root);
    return 0;
}