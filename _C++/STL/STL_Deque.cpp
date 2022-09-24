#include <iostream>
#include <deque>

using namespace std;

int main(){
  deque<int> d;

  // push_back()/push_front()/pop_back()/pop_front fucntions

  d.push_back(1);
  d.push_back(2);
  d.push_front(3);
  d.push_front(4);
  for(int i=0;i<d.size();i++){
    cout<<d[i]<<" ";
  }
  cout<<endl;

  d.pop_back();
  d.pop_front();
  for(int i=0;i<d.size();i++){
    cout<<d[i]<<" ";
  }
  cout<<endl;

  // at(),front(),back(),empty() functions are same

  // erase() function

  d.erase(d.begin(),d.begin()+1);
  for(int i=0;i<d.size();i++){
    cout<<d[i]<<" ";
  }
  cout<<endl;

  return 0;
}