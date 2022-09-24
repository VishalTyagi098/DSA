#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<string> s;

  s.push("Mr.");
  s.push("Vishal");
  s.push("Tyagi");

  cout<<"Top element in stack: "<<s.top();

  s.pop();

  cout<<"Top element in stack: "<<s.top();

  return 0;
}