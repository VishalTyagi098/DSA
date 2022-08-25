#include <iostream>
using namespace std;

int peakElement(int arr[],int n){
  int start=0;
  int end=n-1;
  int mid= start +(end-start)/2;

  while(start<end){
    if(arr[mid]<arr[mid+1]){
      start=mid+1;
    }
    else{
      end=mid;
    }
    mid=start+(end-start)/2;
  }
  return start;

}

int main(){
  int arr[4]={1,3,5,0};
  cout<<"The peak element in array is: "<<arr[peakElement(arr,4)]<<" Present at index: "<<peakElement(arr,4);
  return 0;
}