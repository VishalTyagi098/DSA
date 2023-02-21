#include<iostream>
using namespace std;
 
string removeSubstring(string s, string substr){
  while(s.length() && s.find(substr) < s.length()){
    s.erase(s.find(substr),substr.length());
  }
  return s;
}
 
int main()
{
  string s="Vishal";
  cout<<removeSubstring(s,"sh");
    return 0;
}