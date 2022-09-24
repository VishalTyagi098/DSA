#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;

  // capactity() and push_back() function
  cout<<"Capacity: "<<v.capacity()<<endl;

  v.push_back(1);
  cout<<"Capacity: "<<v.capacity()<<endl;
  v.push_back(2);
  cout<<"Capacity: "<<v.capacity()<<endl;
  v.push_back(3);
  cout<<"Capacity: "<<v.capacity()<<endl; // Capacity is 4 because vector 'doubles' the size

  
  


  return 0;
}