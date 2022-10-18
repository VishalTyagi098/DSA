#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
 
//  Creating node
struct Node{
   int data;
   struct Node* next;   
};

// insert at head
void insertAtHead(struct Node* &head,int new_data){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->next=NULL;

  new_node->next=head;
  head=new_node;
}

// insert at tail
void insertAtTail(struct Node* &head, int new_data){
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->next=NULL;

  // traversing tail to the end of the linked list
  struct Node* tail=head;
  while(tail->next!=NULL){
    tail=tail->next;
  }

  tail->next=new_node;
}

// insert after node
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

// insert before node
void insertBeforeNode(struct Node* &head,int new_data, int num){
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
 
//  printing ll
void printLL(struct Node* &head){
  struct Node* temp= head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }cout<<endl;
}

int main()
{
  
  struct Node* node1=(struct Node*)malloc(sizeof(struct Node)); // Allocate memory
  node1->data=10; // insert data
  node1->next=NULL; // insert next

  struct Node* head=node1;

  printLL(head);
  insertAtHead(head,20);
  printLL(head);

  insertAtTail(head,30);
  printLL(head);

  insertAfterNode(head,40,10);
  printLL(head);

  insertBeforeNode(head,50,10);
  printLL(head);
    return 0;
}