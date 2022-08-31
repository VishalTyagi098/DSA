// SEARCH SPACE QUESTION
#include <iostream>
using namespace std;

// Check if difference between two positions of cows is possible or not
bool isPossibleSoln(int arr[],int n,int k, int mid){
  int cowCount=1;
  // This counter will place other cows on different indices.
  int lastPos=arr[0];

  for (int i=0;i<n;i++){
    // Check if difference between two cows placed is equal to mid or not
    if(arr[i]-lastPos>=mid){ 
      // This will make another cow.
      cowCount++;
      // if cow count is equal to k, then return true because distance is possible and all the cows have been created.
      if(cowCount==k){
        return true;
      }
      lastPos=arr[i];
    }  
  }
  return false;
}

int binarySearch(int arr[],int n,int k){
  // Creating search space
  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;
  
  int ans=-1;
  while(s<=e){

    // Because we need to find maximum of the minimum distace
    if(isPossibleSoln(arr,n,k,mid)){
      ans=mid;
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}

int main (){
  // Sorted array is here but non-sorted array will also be given. So writed code according to that.
  int arr[3]={1,2,3};
  cout<<binarySearch(arr,3,2);
  return 0;
}