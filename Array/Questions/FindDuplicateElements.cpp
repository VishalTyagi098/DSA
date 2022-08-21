#include <iostream>
using namespace std;

int duplicateElement(int arr[],int n){
  int ans=0;

  // XOR ing all the elements inside array will remove the repeated element
  for(int i=0;i<n;i++){
    ans=ans^arr[i];
  }

  // XOR ing the left out ans with all the numbers from 1 to n-1 will leave only the repeated element
  for(int i=1;i<n;i++){
    ans=ans^i;
  }
  return ans;
}

int main(){

  int arr[5]={1,2,3,4,2};

  cout<<duplicateElement(arr,5);
  return 0;
}