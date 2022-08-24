#include <iostream>
using namespace std;

int firstOccurence(int arr[],int n, int key){
  int start=0;
  int end=n-1;
  int mid= start + (end-start)/2;
  int ans=-1;

  while (start<=end)
  {
    if(arr[mid]==key){
      ans=mid;
      end=mid-1;
    }
    else if(arr[mid]<key){
      start=mid+1;
    }
    else if(arr[mid]>key){
      end=mid-1;
    }
    mid=start+ (end-start)/2;
  }

  return ans;
}

int lastOccurence(int arr[],int n, int key){
  int start=0;
  int end=n-1;
  int mid= start + (end-start)/2;
  int ans=-1;

  while (start<=end)
  {
    if(arr[mid]==key){
      ans=mid;
      start=mid+1;
    }
    else if(arr[mid]<key){
      start=mid+1;
    }
    else if(arr[mid]>key){
      end=mid-1;
    }
    mid=start+ (end-start)/2;
  }

  return ans;
  
}

int main(){
  int arr[15]={1,2,3,4,4,4,4,4,4,4,4,4,4,4,5};
  int firstOcc=firstOccurence(arr,15,4);
  int lastOcc=lastOccurence(arr,15,4);
  cout<<"First occurence : "<<firstOcc<<endl;
  cout<<"Last occurence : "<<lastOcc<<endl;

  return 0;
}