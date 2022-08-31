// SEARCH SPACE QUESTION
#include <iostream>
using namespace std;

// Function to check if the pages and books can be allocated according to the condition of question.
bool isPossibleSoln(int arr[],int n, int m, int mid){
  int studentCount=1;
  int pageSum=0;

  for(int i=0; i<n; i++){

    // It will check if sum of the pages alloted to one child is less then or equal to the mid value. first it will start from student 1. Then when the studentCount is incremented, it will check for pageSum for those students
    if(pageSum+arr[i]<=mid){
      pageSum+=arr[i];
    }
    else{
      studentCount++;
      if(studentCount>m || arr[i]>mid){
        return false;
      }
      
      // This will assign starting value of pageSum for other students
      pageSum=arr[i];
    }
  }
  return true;

}


// Binary Search function for reducing our search space (0 to sum of all elements in array)
int binarySearch(int arr[], int n,int m){
  int s=0;
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  int e=sum;
  int mid= s +(e-s)/2;

  int ans=-1;

  while(s<=e){

    // If possible soln is found, all the numbers greater than mid will also be possible soln. But we need to find the minimum solution, so we put e=mid-1
    if(isPossibleSoln(arr,n,m,mid)){
      ans=mid;
      e=mid-1;
    }

    // If possible soln is not found, all the numbers less than mid will not be a possible soln. So we put s=mid+1
    else{
      s=mid+1;
    }

    // update mid
    mid=s+(e-s)/2;
  }
  return ans;
}

int main(){
  int arr[4]={10,20,30,40};
  cout<<binarySearch(arr,4,2);
  return 0;
}