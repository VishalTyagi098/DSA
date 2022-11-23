#include<iostream>
using namespace std;
 
void moveZeroesToEnd(int arr[],int n){
  int i=0;

  for(int j=0;j<n;j++){
    if(arr[j]!=0){
      swap(arr[j],arr[i]);
      i++;
    }
  }
}
 
int main()
{
  int arr[7]={0, 1, 2, 0, 0, 3, 0};
  moveZeroesToEnd(arr,7);
  for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
  }
    return 0;
}


