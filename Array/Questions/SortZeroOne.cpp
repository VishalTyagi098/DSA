#include <iostream>
using namespace std;

void SortZeroOne(int arr[],int n){
  int start=0,end=n-1;
  while(start<end){
    while(arr[start]==0 && start<end){
      start++;
    }
    while(arr[end]==1 && start<end){
      end--;
    }

    if(start<end){
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
  }
}

void newSortZero(int arr[],int n){
  int i=0;
  for(int j=0;j<n;j++){
    if(arr[j]!=0){
      swap(arr[i],arr[j]);
      i++;
    }
  }
}

void printarr(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[7]={0,1,1,0,0,1,0};
  
  SortZeroOne(arr,7);
  printarr(arr,7);
  return 0;
}