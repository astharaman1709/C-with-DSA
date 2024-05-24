#include<iostream>
#include<limits.h>
using namespace std;


int getMax(int arr[][3], int rows, int cols){
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (max<arr[i][j])
            {
                max = arr[i][j];
            }
            
        }
        
    }
  return max;  
}


int getMin(int arr[][3], int rows, int cols){
    int min = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (min>arr[i][j])
            {
                min = arr[i][j];
            }
            
        }
        
    }
  return min;  
}
int main(){
    int arr[3][3];
     int rows = 3;
     int cols = 3;
//row wise
cout<<"row wise"<<endl;
     for (int i = 0; i < rows; i++)
     {
      for (int j = 0; j < cols; j++)
      {
        cin>>arr[i][j];
      }
      cout<<endl;
     }


     cout<<"row wise"<<endl;
     for (int i = 0; i < rows; i++)
     {
      for (int j = 0; j < cols; j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
     }
    cout<<getMax(arr,rows,cols)<<endl;
     cout<<getMin(arr,rows,cols)<<endl;
    return 0; 
}