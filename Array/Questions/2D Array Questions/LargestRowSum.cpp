#include<iostream>
using namespace std;
 
int largestSum(int arr[][3],int row,int col){
  int max=0;
  for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
      sum+=arr[i][j];
    }
    if(max<sum) max=sum;
    sum=0;
  }
  return max;
}
 
int main()
{
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  cout<<largestSum(arr,3,3);

    return 0;
}