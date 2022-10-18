#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
 
struct Node{
  int data;
  Node* next;
};

void insertAtHead(struct Node* &head,int new_data){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->next=NULL;

  struct Node* ptr=head;

  while(ptr->next!=head){
    ptr=ptr->next;
  }

  new_node->next=head;
  ptr->next=new_node;
  head=new_node;
}

void printLL(struct Node* &head){
  struct Node* ptr=head;
  cout<<ptr->data<<" ";
  while(ptr->next!=head){
    ptr=ptr->next;
    cout<<ptr->data<<" ";
  }cout<<endl;
}
 
int main()
{
  struct Node* node1=(struct Node*)malloc(sizeof(struct Node));
  node1->data=10;
  node1->next=node1;

  printLL(node1);

  insertAtHead(node1,20);
  printLL(node1);

  insertAtHead(node1,30);
  printLL(node1);

  insertAtHead(node1,40);
  printLL(node1);

    return 0;
}