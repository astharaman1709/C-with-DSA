#include<iostream>
using namespace std;

int main(){
    int arr[]={15,7,9,44,77};
    int size = 5;
  

  int start = 0;
  int end = size-1;

  while (start<=end)
  {
  swap(arr[start],arr[end]);
  
  start++;
  end--;
  }
  for (int i = 0; i < size; i++)
  {
   cout << arr[i]<<" ";
  }
  


  return 0;
}
