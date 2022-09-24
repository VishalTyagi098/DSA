#include <iostream>
#include <array>

using namespace std;

int main(){
  array<int,4> a={1,2,3,4};

  // Size function
  int size=a.size();

  // Printing out as same as normal array
  for (int i=0;i<size;i++){
    cout<<a[i]<<endl;
  }

  // at() function 
  cout<<"Element present at index 2: "<<a.at(2)<<endl;

  // empty() function
  cout<<"Array is empty or not: "<<a.empty()<<endl;
}