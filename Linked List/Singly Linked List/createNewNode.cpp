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

int main(){
  // We use class/struct pointer becuase we can use Arrow functions to get the values from inside the node and we also need the address of the node for head and next address. They can now give address by simply accessing them by 'node1'.
  Node* node1=new Node(10);

  cout<<node1<<endl;
  cout<<node1 -> data<<endl;
  cout<<node1 -> next<<endl;
  
  return 0;
}