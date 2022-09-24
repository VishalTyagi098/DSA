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
}