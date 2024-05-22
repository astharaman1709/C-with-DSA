#include<iostream>
#include<limits.h>
using namespace std;

//Pass by reference
int main(){
    int arr[]={15,7,9,44,77};
    int size = 5;
   int minNum = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i]<minNum)
    {
       minNum=arr[i];
    }
    
  }
  cout<<"Maximum number is "<<minNum<<endl;
}
