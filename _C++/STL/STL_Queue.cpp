#include <iostream>
#include <queue>
using namespace std;

int main(){
  queue<string> s;

  s.push("Mr.");
  s.push("Vishal");
  s.push("Tyagi");

  cout<<"Top element in stack: "<<s.front()<<endl;

  s.pop();

  cout<<"Top element in stack: "<<s.front();

  return 0;
}