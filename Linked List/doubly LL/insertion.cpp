#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
 
struct Node{
  int data;
  struct Node* prev;
  struct Node* next;
};

void insertAtHead(struct Node* &head,int new_data){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->prev=NULL;
  new_node->next=NULL;

  new_node->next=head;
  head->prev=new_node;
  head=new_node;
}

void insertAtTail(struct Node* &head,int new_data){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->prev=NULL;
  new_node->next=NULL;

  struct Node* ptr=head;

  while(ptr->next!=NULL){
    ptr=ptr->next;
  }

  ptr->next=new_node;
  new_node->prev=ptr;
}

void insertAfterNode(struct Node* &head,int new_data,int num){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->next=NULL;
  new_node->prev=NULL;

  struct Node* ptr=head;

  while(ptr->data!=num){
    ptr=ptr->next;
  }

  new_node->next=ptr->next;
  new_node->prev=ptr;
  ptr->next->prev=new_node;
  ptr->next=new_node;
}

void insertBeforeNode(struct Node* &head, int new_data,int num){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->prev=NULL;
  new_node->next=NULL;

  struct Node* ptr=head;

  while(ptr->data!=num){
    ptr=ptr->next;
  }

  new_node->next=ptr;
  new_node->prev=ptr->prev;
  ptr->prev->next=new_node;
  ptr->prev=new_node;
}

void printLL(struct Node* &head){
  struct Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }cout<<endl;
}
 
int main()
{
  struct Node* node1=(struct Node*)malloc(sizeof(struct Node));
  node1->data=10;
  node1->prev=NULL;
  node1->next=NULL;
  
  struct Node* head=node1;


  insertAtHead(head,20);
  printLL(head);

  insertAtTail(head,30);
  printLL(head);

  insertAfterNode(head,40,10);
  printLL(head);

  insertBeforeNode(head,50,20);
  printLL(head);

    return 0;
}