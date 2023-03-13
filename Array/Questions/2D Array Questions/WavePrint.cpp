#include<iostream>
using namespace std;

// NOTE THIS IS HOW BINARY AND IS WORKING TO CALCULATE EVEN/ODD NUMBER:-
// 0 & 0 = 0
// 0 & 1 = 0
// 1 & 0 = 0
// 1 & 1 = 1
 
void wavePrint(int arr[][3],int row,int col){
  for(int i=0;i<col;i++){
    if(i&1){
      // odd column
      for(int j=row-1;j>=0;j--){
        cout<<arr[j][i]<<" ";
      }
    }
    else{
      // Even coloumn
      for(int j=0;j<row;j++){
        cout<<arr[j][i]<<" ";
      }
    }
  }
}
 
int main()
{
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  wavePrint(arr,3,3);
    return 0;
}