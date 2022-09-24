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

  // at(), front(), back() functions
  cout<<"Element at index 2: "<<v.at(2)<<endl;
  cout<<"First element: "<<v.front()<<endl;
  cout<<"Last element: "<<v.back()<<endl;

  return 0;
}