#include<iostream>
using namespace std;
 
struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
};

void insertAtHeadSLL(struct Node* &head,int newData){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=newData;
  newNode->next=NULL;

  newNode->next=head;
  head=newNode;
}
void insertAtTailSLL(struct Node* &head,int newData){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=newData;
  newNode->next=NULL;

  struct Node* ptr=head;
  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
  ptr->next=newNode;
}
void insertAfterNodeSLL(struct Node* &head,int newData,int key){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=newData;
  newNode->next=NULL;

  struct Node* ptr=head;
  struct Node* preptr=ptr;

  while(preptr->data!=key){
    preptr=ptr;
    ptr=ptr->next;
  }

  preptr->next=newNode;
  newNode->next=ptr;
}
void insertBeforeNodeSLL(struct Node* &head,int newData,int key){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=newData;
  newNode->next=NULL;

  struct Node* ptr=head;
  struct Node* preptr=ptr;

  while(ptr->data!=key){
    preptr=ptr;
    ptr=ptr->next;
  }

  preptr->next=newNode;
  newNode->next=ptr;
}

// Doubly LL
void insertAtHeadDLL(struct Node* &head,int newData){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=newData;
  newNode->next=NULL;
  newNode->prev=NULL;

  newNode->next=head;
  head->prev=newNode;
  head=newNode;
}
void insertAtTailDLL(struct Node* &head,int newData){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=newData;
  newNode->next=NULL;
  newNode->prev=NULL;

  struct Node*ptr=head;
  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
  newNode->prev=ptr;
  ptr->next=newNode;
}

void printLL(struct Node* head){
  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
  }cout<<endl;
}
 
int main()
{
    return 0;
}