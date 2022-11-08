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



 
int main()
{
    return 0;
}