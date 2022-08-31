#include <iostream>
using namespace std;


// Binary Search function for reducing our search space (0 to sum of all elements in array)
int binarySearch(int arr[], int n,int m){
  int s=0;
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  int e=sum;
  int mid= s +(e-s)/2;

  int ans=0;

  while(s<=e){

    // If possible soln is found, all the numbers greater than mid will also be possible soln. But we need to find the minimum solution, so we put e=mid-1
    if(isPossibleSoln(int arr[],int n,int m, int mid)){
      ans=mid;
      e=mid-1;
    }

    // If possible soln is not found, all the numbers less than mid will not be a possible soln. So we put s=mid+1
    else{
      s=mid+1;
    }

    // update mid
    mid=s+(e-s)/2;
  }
  return ans;
}

int main(){

  return 0;
}