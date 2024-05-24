#include<iostream>
#include<limits.h>
using namespace std;

 void Transpose(int arr[][3], int r, int c, int transpose[][3]){
     for (int i = 0; i < r; i++)
     {
        for (int j = 0; j < c; j++)
        {
        //    swap(arr[i][j], arr[j][i]);
        transpose[j][i] = arr[i][j];
        }
        
     }
     
 }


void print(int arr[][3], int r, int c){
     for (int i = 0; i < r; i++)
     {
        for (int j = 0; j < c; j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     
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

     cout<<"Printing array "<<endl;
    print(arr,rows,cols);
         cout<<"Starting transpose "<<endl;
         int transpose[3][3];
    Transpose(arr,rows,cols, transpose);
         cout<<"Printing array again"<<endl;
   print(transpose ,rows,cols);
    return 0; 
}