#include<iostream>
using namespace std;
 
char toLowerCase(char ch){
  if(ch>='a'&&ch<='z'){
    return ch;
  }
  else{
    // ASCII value of Capital character subtracted by 'A' gives integer value. When we add 'a', it gives that same character in lower form
    char temp= ch-'A' + 'a';
    return temp;
  }
}
char toUpperCase(char ch){
  if(ch>='A'&&ch<='Z'){
    return ch;
  }
  else{
    // ASCII value of small character subtracted by 'A' gives integer value. When we add 'a', it gives that same character in upper form
    char temp= ch-'a' + 'A';
    return temp;
  }
}
 
int main()
{
  cout<<"Lower Character: "<<toLowerCase('B')<<endl;
  cout<<"Upper Character: "<<toUpperCase('b');
    return 0;
}