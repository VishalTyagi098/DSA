// SEARCH SPACE QUESTION
#include <iostream>
using namespace std;


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