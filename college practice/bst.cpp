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
 
int main()
{
    return 0;
}