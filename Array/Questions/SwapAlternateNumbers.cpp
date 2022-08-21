#include <iostream>
using namespace std;

void printArray(int arr[],int n){
  for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

void swapAlternate(int arr[],int n){
  for(int i=0;i<n;i+=2){
    if(i+1<n){
      swap(arr[i],arr[i+1]);
    }
  }
}

int main(){

  int array[5]={1,2,3,4,5};

  swapAlternate(array,5);

  printArray(array,5);  
  return 0;
}