#include<iostream>
using namespace std;
 
void mergeSortedArrays(int arr1[],int n,int arr2[],int m){
  int arr3[n+m],k=0,i=0,j=0;

  while(i<n && j<m){
    if(arr1[i]<arr2[j]){
      arr3[k++]=arr1[i++];
    }
    else if(arr1[i]>arr2[j]){
      arr3[k++]=arr2[j++];
    }
    else{
      arr3[k++]=arr1[i++];
      j++;
    }
  }

  while(i<n){
    arr3[k++]=arr1[i++];
  }
  while(j<m){
    arr3[k++]=arr2[j++];
  }

  for(int i=0;i<k;i++){
    cout<<arr3[i]<<" ";
  }
}
 
int main()
{
  int arr1[5]={1,3,5,7,9};
  int arr2[4]={2,4,7,8};
  mergeSortedArrays(arr1,5,arr2,4);
    return 0;
}