#include <iostream>
using namespace std;

void arrayIntersection(int arr1[],int n,int arr2[],int m){
  int i=0,j=0;
  while(i<n && j<m){
    if(arr1[i]==arr2[j]){
      cout<<arr1[i]<<" ";
      i++;
      j++;
    }
    else if(arr1[i]>arr2[j]){
      j++;
    }
    else{
      i++;
    }
  }
}

int main(){
  int arr1[5]={1,2,2,3,5};
  int arr2[3]={2,2,3};

  arrayIntersection(arr1,5,arr2,3);

  return 0;
}