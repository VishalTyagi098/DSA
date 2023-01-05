#include<iostream>
using namespace std;
 
struct Node{
  int data;
  struct Node* next;
};

void insertAtTail(struct Node* &head,int newData){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=newData;
  newNode->next=NULL;

  struct Node* ptr=head;
  while(ptr->next!=head){
    ptr=ptr->next;
  }

  ptr->next=newNode;
  newNode->next=head;
}

void printLL(struct Node* head){
  struct Node* ptr=head;
  cout<<ptr->data<<" ";
  while(ptr->next!=head){
    ptr=ptr->next;
    cout<<ptr->data<<" ";
  }cout<<endl;
}

void survivor(struct Node* head,int k){
  struct Node* p;
  struct Node* q;
  p=head;
  q=head;
  int i;
  while(p->next!=p){
    // 1
    for(i=0;i<k-1;i++){
      q=p;
      p=p->next;
    }
    // 2
    free(p);
    q->next=p->next;
  }
  // 3
  head=p;
  cout<<p->data;

}
 
int main()
{
  struct Node* head=(struct Node*)malloc(sizeof(struct Node));
  head->data=10;
  head->next=head;
  insertAtTail(head,20);
  insertAtTail(head,30);
  insertAtTail(head,40);
  insertAtTail(head,50);
  printLL(head);
    return 0;
}