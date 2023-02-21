#include<iostream>
using namespace std;

 
char maxOccOfChar(string s){
  int alphabets[26]={0};

  for( int i=0; i<s.length() ; i++){
    char ch=s[i];
    int n= ch - 'a';
    alphabets[n]++;
  }

  int maxi=-1;
  int ans=0;

  for( int i=0; i<26;i++){
    if(maxi<alphabets[i]){
      maxi=max(maxi,alphabets[i]);
      ans=i;
    }
  }

  return ans+'a';
}
 
int main()
{
  cout<<maxOccOfChar("output");
    return 0;
}