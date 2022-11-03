#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void push(struct Node* &top,int new_data){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=NULL;

    if(top==NULL){
        top=new_node;
    }
    else{
        new_node->next=top;
        top=new_node;
    }
}

void pop(struct Node* &top){
    struct Node* ptr=top;
    if(top==NULL){
        cout<<"underflow";
    }
    else{
        top=top->next;
    }
    free(ptr);
}

void printStack(struct Node* top){
    if(top==NULL){
        cout<<"empty";
    }
    else{
        while(top!=NULL){
            cout<<top->data<<" ";
            top=top->next;
        }cout<<endl;
    }
}

int main(){
    struct Node* top=(struct Node*)malloc(sizeof(struct Node));
    top->data=10;
    top->next=NULL;

    push(top,20);
    printStack(top);

    push(top,30);
    printStack(top);

    push(top,40);
    printStack(top);

    pop(top);
    printStack(top);


}