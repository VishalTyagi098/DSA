#include <iostream>
using namespace std;

void TripletSum(int arr[],int n,int sum){
  int i=0,j=0,k=0;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      for(k=j+1;k<n;k++){
        if(arr[i]+arr[j]+arr[k]==sum){
          cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
        }
      }
    }
  }
}

int main(){
  int arr[5]={1,2,3,4,5};
  
  TripletSum(arr,5,9);

  return 0;
}