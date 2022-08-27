#include <iostream>
using namespace std;

// Finding pivot element 
int pivotElement(int arr[],int n){
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;

  while(s<e){
    if(arr[mid]>=arr[0]){
      s=mid+1;
    }
    else{
      e=mid;
    }
    mid=s+(e-s)/2;
  }
  return s;
}

// binary search
int binarySearch(int arr[],int n,int start,int end,int key){
  int s=start;
  int e=end;
  int mid=s + (e-s)/2;

  while(s<=e){
    if(arr[mid]==key){
      return mid;
    }
    if(arr[mid]<key){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=s + (e-s)/2;
  }
  return -1;
}

int main(){
  int arr[6]={7,8,1,2,3};
  int key=2;

  int pivot = pivotElement(arr,6);

  // conditions for searching in rotated sorted array

  if(key>=pivot){
    cout<<binarySearch(arr,6,pivot,6-1,key);
  }
  else{
    cout<<binarySearch(arr,6,0,pivot-1,key);
  }

  return 0;
}