#include<iostream>
#include<limits.h>
using namespace std;

//Pass by reference
int main(){
    int arr[]={15,7,9,44,77};
    int size = 5;
   int maxNum = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i]>maxNum)
    {
       maxNum=arr[i];
    }
    
  }
  cout<<"Maximum number is "<<maxNum<<endl;
}
