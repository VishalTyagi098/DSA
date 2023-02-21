*********************************************************
#include<iostream>
#include<cstring>
using namespace std;
 
void reverse(string s){
  int i=0;
  int j=s.length()-1;

  while(i<=j){
    swap(s[i++],s[j++]);
  }
}

void reverseWords(string s){
  string new_s;
  int i=0;
  while(i<s.length()){
    if(!isspace(s[i]) || s[i]!='\0'){
      new_s=new_s + s[i];
      i++;
      cout<<"In if "<<i<<endl;
    }
    else{
      reverse(new_s);
      cout<<new_s;
      new_s="";
      i++;
    }
  }
}
 
int main()
{
  string name="Vishal Tyagi";
  reverseWords(name);
    return 0;
}