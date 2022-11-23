#include<iostream>
using namespace std;
 
void rotateArray(int arr[],int n,int k){
  int temp[n];
  // Store the rotated array in new array otherwise elements will overwrite in the existing array
  for(int i=0;i<n;i++){
    // formula (to cycle back to the array after k terms which will act as the remainder in the modulo operator)
    temp[(i+k)%n]=arr[i];
  }
  
  for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
  }
}
 
int main()
{
  int arr[5]={1,2,3,4,5};
  rotateArray(arr,5,2);
    return 0;
}