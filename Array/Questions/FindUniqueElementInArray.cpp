#include <iostream>
using namespace std;

void printArray(int arr[],int n){
  for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int uniqueElement(int arr[],int n){
  int ans=0;
  for(int i=0;i<n;i++){
    ans=ans^arr[i];
  }
  return ans;
}

int main(){

  int arr[5]={1,2,3,3,2};

  cout<<uniqueElement(arr,5);

  return 0;
}