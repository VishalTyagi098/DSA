#include<iostream>
using namespace std;
 
char toLowerCase(char ch){
  if(ch>='a'&&ch<='z'){
    return ch;
  }
  else{
    return ch-'A'+'a';
  }
}

int checkPalindrome(string s){
  int i=0;
  int j=s.length()-1;

  while(i<=j){
    if(toLowerCase(s[i])!=toLowerCase(s[j])){
      return 0;
    }
    else{
      i++;
      j--;
    }
  }
  return 1;
}

 
int main()
{
  string s="abcba";
  cout<<checkPalindrome(s);
    return 0;
}