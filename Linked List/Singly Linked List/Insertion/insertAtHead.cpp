#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  // constructor to initialise value of Node
  Node(int data){
    this ->data=data;
    this ->next=NULL;
  }
};

void insertAtHead(Node* &head,int d){
  // Create new node 
  Node* temp= new Node(10);
  // Store value of address in new node
  temp ->next= head;
  // make new node the 'head'
  head=temp;
}

int main(){
  Node* node1=new Node(10);

  cout<<node1<<endl;
  cout<<node1 -> data<<endl;
  cout<<node1 -> next<<endl;
  
  return 0;
}