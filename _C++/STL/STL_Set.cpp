#include <iostream>
#include <set>
using namespace std;

int main(){
  set<int> s;
  // insert()
  s.insert(1);
  s.insert(2);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);
  s.insert(5);

  for(auto i:s){
    cout<<i<<" ";
  }cout<<endl;

  // size()
  int size=s.size();

  cout<<"size: "<<size<<endl;

  // erase()
  s.erase(s.begin());

  for(auto i:s){
    cout<<i<<" ";
  }cout<<endl;

  // count()
  cout<<"is -5 present in set?: "<<s.count(-5)<<endl;

  // find()
  set<int>::iterator itr=s.find(3);
  for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
  }
  return 0;
}