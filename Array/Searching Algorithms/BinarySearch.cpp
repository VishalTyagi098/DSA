#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n, int key){
  int start=0;
  int end=n-1;

  int mid= start+ (end-start)/2;

  while(start<=end){

    // check if mid value is key. If YES then return key and exit the loop.
    if(arr[mid]==key){
      return mid;
    }

    // if NO, update start/end values.
    if(arr[mid]<key){
      start=mid+1;
    }
    else{
      end=mid-1;
    }

    // update mid value
    mid=start + (end-start)/2;
  }
  return -1;
}

int main(){

  int arr[5]={1,-1,2,-2,4};
  int key=1;
  cout<< "index of key is: "<<BinarySearch(arr,5,key);

  return 0;
}