#include<iostream>
#include<vector>
using namespace std;

// There can be 3 cases:-

// First We will find the general Sum (by i-- and j-- until one of the case is formed)
// Sum= a1[i]+a2[j]+carry
// Carry= Sum%10         
// Sum=Sum%10

// Case 1: {1,2,3,4}  -->     Sum= a1[i]+carry
//               {6}  -->     Carry= Sum%10         Sum=Sum%10

// Case 2:       {6}  -->     Sum= a2[j]+carry
//         {1,2,3,4}  -->     Carry= Sum%10         Sum=Sum%10

// Case 3: {9,9,9}    -->     Sum= carry
//         {9,9,9}    -->     Carry= Sum%10         Sum=Sum%10 

// Reverse the array

vector<int> reverse(vector<int> v){
  int s=0;
  int e=v.size()-1;
  while(s<e){
    swap(v[s],v[e]);
  }
  return v;
}
 
vector<int> AddTwoArrays(int arr1[],int n,int arr2[],int m){
  int i=n-1;
  int j=m-1;
  int sum=0;
  int carry=0;
  vector<int> arr3;

  while(i>=0 && j>=0){
    sum=arr1[i]+arr2[j]+carry;
    carry=sum%10;
    sum=sum%10;

    arr3.push_back(sum);
  }

  while(i>=0){
    sum=arr1[i]+carry;
    carry=sum%10;
    sum=sum%10;

    arr3.push_back(sum);
  }

  while(j>=0){
    sum=arr2[j]+carry;
    carry=sum%10;
    sum=sum%10;

    arr3.push_back(sum);
  }

  while(carry!=0){
    sum=carry;
    carry=sum%10;
    sum=sum%10;

    arr3.push_back(sum);
  }

  return reverse(arr3);
  
}
 
int main()
{
  int arr1[4]={1,2,3,4};
  int arr2[1]={6};
  vector<int> ans=AddTwoArrays(arr1,4,arr2,1);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
    return 0;
}