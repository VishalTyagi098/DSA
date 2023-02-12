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

string removeSpecialCharacters(string s){
  string new_s;
  for(int i=0;s[i]!='\0';i++){
    if(s[i]>='a'&&s[i]<='b' || s[i]>='A'&&s[i]<='Z' || s[i]>=0&&s[i]<=9){
      new_s=new_s + s[i];
    }
  }
  return new_s;
}

int checkPalindrome(string s){
  s=removeSpecialCharacters(s);
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
  string s="c1 0$d@eeD o1c";
  cout<<checkPalindrome(s)<<endl;
  string s1="abcba";
  cout<<checkPalindrome(s1);
    return 0;
}