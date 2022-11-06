#include<iostream>
using namespace std;
 
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
};

Node* newNode(int data){
  struct Node* node=(struct Node*)malloc(sizeof(struct Node));
  node->data=data;
  node->left=NULL;
  node->right=NULL;
  return (node);
}


Node* buildTree(struct Node* root){
  int newData;
  cout<<"Enter Data: ";
  cin>>newData;
  root=newNode(newData);
  
  if(newData==-1){
    return NULL;
  }

  cout<<"Type data on the left of: "<<newData<<endl;
  root->left=buildTree(root->left);
  cout<<"Type data on the right of: "<<newData<<endl;
  root->right=buildTree(root->right);

  return root;

}
 
void preOrderTraversal(Node* root){
  if(root==NULL){
    return;
  }

  cout<<root->data<<" ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

int main()
{
  struct Node* root=NULL;
  root=buildTree(root);

  preOrderTraversal(root);
  return 0;
}