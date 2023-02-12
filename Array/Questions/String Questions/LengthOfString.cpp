#include<iostream>
using namespace std;
 
int length(char arr[]){
  int count=0;
  for(int i=0;arr[i]!='\0';i++){
    count++;
  }
  return count;
}
 
int main()
{
  char name[100];
  cin>>name;
  cout<<"length of string is: "<<length(name);
    return 0;
}