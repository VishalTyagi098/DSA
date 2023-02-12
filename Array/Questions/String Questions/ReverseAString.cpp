#include<iostream>
using namespace std;
 
int length(char arr[]){
  int count=0;
  for(int i=0;arr[i]!='\0';i++){
    count++;
  }
  return count;
}

void reverse(char arr[]){
  int i=0;
  int j=length(arr)-1;
  while(i<=j){
    swap(arr[i++],arr[j--]);
  }
}
 
int main()
{
  char name[20];
  cout<<"type your name";
  cin>>name;
  reverse(name);
  cout<<"Reversed name: "<<name;
    return 0;
}