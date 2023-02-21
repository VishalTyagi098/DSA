#include<iostream>
#include<cctype>
using namespace std;

// isspace() function is used
 
void replaceSpaces(string s){
  for(int i=0;i<s.length();i++){
    if(isspace(s[i])){
      cout<<"@40";
    }
    else{
      cout<<s[i];
    }
  }
}
 
int main()
{
  replaceSpaces("vishal Tyagi");
    return 0;
}