#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node
{
  int data;
  Node *prev;
  Node *next;
};

void insertAtHead(struct Node *&head, int new_data)
{
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->prev = NULL;
  new_node->next = NULL;

  new_node->next = head;
  head->prev = new_node;
  head = new_node;
}

void deleteFromHead(struct Node *&head)
{
  struct Node *ptr = head;
  head = head->next;
  head->prev = NULL;
  free(ptr);
}

void deleteFromTail(struct Node *&head)
{
  struct Node *ptr = head;
  while (ptr->next != NULL)
  {
    ptr = ptr->next;
  }
  ptr->prev->next = NULL;
  free(ptr);
}

void deleteAfterNode(struct Node *&head, int num)
{
  struct Node *ptr = head;
  while (ptr->data != num)
  {
    ptr = ptr->next;
  }
  struct Node *temp = ptr->next;
  ptr->next = temp->next;
  temp->next->prev = ptr;

  free(temp);
}

void deleteBeforeNode(struct Node* &head,int num){
  struct Node* ptr=head;
  while(ptr->data!=num){
    ptr=ptr->next;
  }

  struct Node* temp=ptr->prev;

  ptr->prev=temp->prev;
  temp->prev->next=ptr;

  free(temp);
}

void printLL(struct Node *&head)
{
  struct Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
  node1->data = 10;
  node1->prev = NULL;
  node1->next = NULL;
  struct Node *head = node1;
  insertAtHead(head, 20);
  insertAtHead(head, 30);
  insertAtHead(head, 40);

  printLL(head);

  // deleteFromHead(head);
  // printLL(head);

  // deleteFromTail(head);
  // printLL(head);

  // deleteAfterNode(head, 30);
  deleteBeforeNode(head, 20);
  printLL(head);
  return 0;
}