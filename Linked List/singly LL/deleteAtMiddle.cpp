#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
 
struct Node{
  int data;
  struct Node* next;
};

void insertAtHead(struct Node* &head,int new_data){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->next=NULL;

  new_node->next=head;
  head=new_node;
}


void insertAtTail(struct Node* &head,int new_data){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->next=NULL;

  struct Node* ptr=head;

  while(ptr->next!=NULL){
    ptr=ptr->next;
  }

  ptr->next=new_node;
}

void insertAfterNode(struct Node* &head,int new_data,int num){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->next=NULL;

  struct Node* ptr=head;
  struct Node* preptr=ptr;

  while(preptr->data!=num){
    preptr=ptr;
    ptr=ptr->next;
  }

  preptr->next=new_node;
  new_node->next=ptr;
}

void insertBeforeNode(struct Node* &head,int new_data,int num){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->next=NULL;

  struct Node* ptr=head;
  struct Node* preptr=ptr;

  while(ptr->data!=num){
    preptr=ptr;
    ptr=ptr->next;
  }

  preptr->next=new_node;
  new_node->next=ptr;
}


 

void printLL(struct Node* &head){
  struct Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }cout<<endl;
}



void deleteFromStart(struct Node* &head){
  struct Node* ptr=head;
  head=head->next;
  free(ptr);
}


void deleteFromEnd(struct Node* &head){
  struct Node* ptr=head;
  struct Node* preptr=ptr;

  while(ptr->next!=NULL){
    preptr=ptr;
    ptr=ptr->next;
  }

  preptr->next=NULL;
  free(ptr);

}

void deleteAfterNode(struct Node* &head, int num){
  struct Node* ptr=head;
  struct Node* preptr=ptr;
  while(preptr->data!=num){
    preptr=ptr;
    ptr=ptr->next;
  }

  preptr->next=ptr->next;
  free(ptr);
}


int main()
{
  struct Node* node1=(struct Node*)malloc(sizeof(struct Node));
  node1->data=10;
  node1->next=NULL;
  struct Node* head=node1;

  insertAtHead(head,20);
  printLL(head);
  insertAtTail(head,30);
  printLL(head);
  insertAfterNode(head,40,10);
  printLL(head);
  insertBeforeNode(head,50,10);
  printLL(head);

  deleteFromEnd(head);
  printLL(head);

  deleteAfterNode(head,50);
  printLL(head);

  deleteFromStart(head);
  printLL(head);
    return 0;
}