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

Node* insertInBST(struct Node* root, int newData){
  if(root==NULL){
    root=newNode(newData);
    return root;
  }
  if(newData> root->data){
    root->right=insertInBST(root->right,newData);
  }
  else{
    root->left=insertInBST(root->left,newData);
  }

  return root;
}

void inputData(struct Node* &root){
  int newData;
  cin>>newData;
  while(newData!=-1){
    root=insertInBST(root,newData);
    cin>>newData;
  }
}

void inOrderTraversal(struct Node* root){
  if(root==NULL){
    return;
  }

  inOrderTraversal(root->left);
  cout<<root->data<<" ";
  inOrderTraversal(root->right);
}


// Searching ( with space complexity O(H) )
bool searchInBST(struct Node* root, int key){
  // 2 base cases
  if(root==NULL){
    return false;
  }
  if(key==root->data){
    return true;
  }

  // 2 conditions
  if(key < root->data){
    return searchInBST(root->left, key);
  }
  else{
    return searchInBST(root->right,key);
  }
}
 
int main()
{
  struct Node* root=NULL;
  cout<<"insert data"<<endl;
  inputData(root);
  inOrderTraversal(root);

  if(searchInBST(root,4)){
    cout<<"True";
  }
  else{
    cout<<"False";
  }

    return 0;
}