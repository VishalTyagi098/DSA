#include<iostream>
using namespace std;
 
int queue[5],n=5,front=-1,rear=-1;

void enqueue(int number){
  if(rear==n-1){
    cout<<"Overflow"<<endl;
  }
  if(front==-1 && rear==-1){
    front++;
    rear++;
  }
  else{
    rear++;
  }
  queue[rear]=number;

}

void dequeue(){
  if(front==-1 || front>rear){
    cout<<"Underflow";
  }
  else{
    cout<<"Removed: "<<queue[front]<<endl;
    front++;
  }
}

void display(){
  if(front==-1 && rear==-1){
    cout<<"Queue is empty."<<endl;
  }
  else{
    for(int i=front;i<=rear;i++){
      cout<<queue[i]<<" ";
    }cout<<endl;
  }
}
 
int main()
{
  enqueue(1);
  display();
  enqueue(2);
  display();
  enqueue(3);
  display();
  enqueue(4);
  display();
  enqueue(5);
  display();

  dequeue();
  display();
  dequeue();
  display();
  dequeue();
  display();
  dequeue();
  display();
  dequeue();
  display();

    return 0;
}