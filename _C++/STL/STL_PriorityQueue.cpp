#include <iostream>
#include <queue>
using namespace std;

int main(){
  // Max-Heap
  priority_queue<int> maxi;

  // Min-Heap
  priority_queue<int, vector<int>,greater<int>> mini;

  maxi.push(3);
  maxi.push(2);
  maxi.push(0);
  maxi.push(1);

  int maxi_size=maxi.size();

  for(int i=0;i<maxi_size;i++){
    cout<<"Top element in maxi queue: "<<maxi.top()<<endl;
    maxi.pop();
  }
  
  mini.push(3);
  mini.push(2);
  mini.push(0);
  mini.push(1);

  int mini_size=mini.size();

  for(int i=0;i<mini_size;i++){
    cout<<"Top element in mini queue: "<<mini.top()<<endl;
    mini.pop();
  }
  

  return 0;
}