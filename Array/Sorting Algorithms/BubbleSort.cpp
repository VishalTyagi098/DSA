#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
  // iteration from 0 to n-1
  for(int i=0;i<n;i++){

    // iteration from 0 to n-i-1 (because 'i'th round will place 'i'th largest element at its place.So no need to iterate till end of array)
    for(int j=0;j<n-i-1;j++){

      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}

int main(){
  int arr[5]={5,4,3,2,1};
  bubbleSort(arr,5);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}