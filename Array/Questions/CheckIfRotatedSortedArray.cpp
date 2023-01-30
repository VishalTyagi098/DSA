#include<iostream>
using namespace std;
 

//  There can be 4 cases:-

// case 1- {1,2,3,4,5}
// Array is sorted - only {5,1} pair is where current element is greater than next - 1 pair

// case 2- {3,4,5,1,2}
// Array is rotated sorted -again only {5,1} pair is where current element is greater than next - 1 pair

// case 3- {1,1,1}
// Array is sorted - no pairs - 0 pairs

// case 4- {3,2,1}
// More than 1 pairs


int checkIfRotatedSortedArray(int arr[],int n){
  int count=0;
  for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
      count++;
    }
  }
  if(arr[n-1]>arr[0]){
    count++;
  }

  return count<=1;
}
 
int main()
{
  int arr1[3]={1,1,1};
  int arr2[5]={3,4,5,1,2};
  int arr3[5]={6,5,4,3,2};

  cout<<checkIfRotatedSortedArray(arr1,3);
  cout<<checkIfRotatedSortedArray(arr2,5);
  cout<<checkIfRotatedSortedArray(arr3,5);
    return 0;
}