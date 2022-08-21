#include <iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
  for (int i=0;i<n;i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1;
}

int main(){
  int arr[5]={1,2,3,4,5};
  int key;
  cout << "Enter the key";
  cin>>key;

  if(linearSearch(arr,5,key)){
    cout<< "key found at index: "<< linearSearch(arr,5,key);
  }
  else{
    cout<< "Key not found in array";
  }
  return 0;
}