#include<iostream>
#include<vector>
using namespace std;
 
vector<int> spiralPrint(int arr[][3],int rows,int cols){
  int count=0,total=rows*cols;
  vector<int> v;

  // indices
  int startingRow=0;
  int startingCol=0;
  int endingRow=rows-1;
  int endingCol=cols-1;

  while(count<total){
    // starting row print
    for(int i=startingCol; i<=endingCol && count<total;i++){
      v.push_back(arr[startingRow][i]);
      count++;
    }
    startingRow++;

    // ending col print
    for(int i=startingRow;i<=endingRow && count<total;i++){
      v.push_back(arr[i][endingCol]);
      count++;
    }
    endingCol--;

    // ending row print
    for(int i=endingCol;i>=startingCol&&count<total;i--){
      v.push_back(arr[endingRow][i]);
      count++;
    }
    endingRow--;

    // starting col print
    for(int i=endingRow;i>=startingRow&& count<total;i--){
      v.push_back(arr[i][startingCol]);
      count++;
    }
    startingCol++;
  }
  return v;
}
 
int main()
{
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  vector<int> ans= spiralPrint(arr,3,3);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
    return 0;
}