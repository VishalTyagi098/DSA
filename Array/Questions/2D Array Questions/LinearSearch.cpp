#include<iostream>
#include<vector>
using namespace std;
 
vector<int> linearSearch(int arr[][2],int row,int col,int target){
  vector<int> v;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(arr[i][j]==target){
        v.push_back(i);
        v.push_back(j);
      }
    }
  }
  return v;
}
 
int main()
{
  int arr[2][2]={{1,2},{3,4}};
  vector<int> ans= linearSearch(arr,2,2,3);
  cout<<ans[0]<<" "<<ans[1];
    return 0;
}