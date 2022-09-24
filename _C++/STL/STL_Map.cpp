#include <iostream>
#include <map>
using namespace std;

int main(){
  map<int,string> m;
  m[20]="Vishal";
  m[50]="Tyagi";
  m[1]="Mr.";
  m[99]="Tyagi";

  m.insert({100,"."});

  for(auto i:m){
    cout<<i.first<<" : "<<i.second<<endl;
  }

  // other functions similar to STL_Set

  return 0;
}