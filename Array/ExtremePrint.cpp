#include<iostream>
using namespace std;

int main(){
    int arr[]={15,7,9,44,77};
    int size = 5;
  

  int start = 0;
  int end = size-1;
  while(true){
    if(start>end)
    break;
    if (start == end){
        cout << arr[start]<<" ";
    }
    
   else{
     cout<<arr[start]<<" ";
    cout<<arr[end]<<" ";
   }
    start++;
    end--;
  }
  return 0;
}
