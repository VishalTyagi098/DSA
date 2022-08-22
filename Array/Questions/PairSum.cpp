#include <iostream>
using namespace std;

void PairSum(int arr[],int n,int sum){
  int i=0,j=0;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(arr[i]+arr[j]==sum){
        cout<<arr[i]<<" "<<arr[j]<<endl;
      }
    }
  }
}

int main(){
  int arr[5]={1,2,3,4,5};
  
  PairSum(arr,5,5);

  return 0;
}