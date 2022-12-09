#include<iostream>
using namespace std;
 
struct Node{
  int data;
  struct Node* next;
};

void enqueue(struct Node* &front,struct Node* &rear, int value){
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=value;
  newNode->next=NULL;

  if(front==NULL){
    front=rear=newNode;
  }
  else{
    rear->next=newNode;
    rear=newNode;
  }
}

void dequeue(struct Node* &front){
  if(front==NULL){
    cout<<"Underflow"<<endl;
  }
  else{
    struct Node* ptr=front;
    cout<<"Removed: "<<front->data<<endl;
    front=front->next;
    free(ptr);
  }
}

void display(struct Node* front){
  while(front!=NULL){
    cout<<front->data<<" ";
    front=front->next;
  }cout<<endl;
}
 
int main()
{
  struct Node* front=NULL;
  struct Node* rear=NULL;
  enqueue(front,rear,1);
  display(front);
  enqueue(front,rear,2);
  display(front);
  enqueue(front,rear,3);
  display(front);
  enqueue(front,rear,4);
  display(front);
  enqueue(front,rear,5);
  display(front);
  enqueue(front,rear,6);
  display(front);

  dequeue(front);
  display(front);

  dequeue(front);
  display(front);

  dequeue(front);
  display(front);

  dequeue(front);
  display(front);
    return 0;
}