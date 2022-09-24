#include <iostream>
#include <list>

using namespace std;

int main(){
  // Doubly linked list
  list<int> l;
  
  l.push_back(1);
  l.push_back(2);
  l.push_front(3);
  l.push_front(4);
  // Since this is a linked list, element is stored without index
  for(int i:l){
    cout<<i<<" ";
  }cout<<endl;

  l.erase(l.begin());
  for(int i:l){
    cout<<i<<" ";
  }


  return 0;
}