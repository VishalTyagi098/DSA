#include<iostream>
using namespace std;
 
int stack[5], n=5, top=-1;

void push(int number){
  if(top>=n-1){
    cout<<"Overflow"<<endl;
  }
  else{
    top++;
    stack[top]=number;
  }

}

void pop(){
  if(top<=-1){
    cout<<"Underflow"<<endl;
  }
  else{
    cout<<"Popped value: "<<stack[top]<<endl;
    top--;
  }
}

void peek(){
  if(top<=-1){
    cout<<"Stack empty";
  }
  else{

    cout<<"Top element of stack: "<<stack[top]<<endl;
  }
}
 
int main()
{
  push(1);
  peek();

  push(2);
  peek();

  push(3);
  peek();

  push(4);
  peek();

  push(5);
  peek();

  pop();
  pop();
  pop();
  pop();
  pop();
  
  peek();
    return 0;
}