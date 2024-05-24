#include<iostream>
using namespace std;


void printRowSum(int arr[][3],int rows, int cols){ //putting col no. is mandatory
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
      for (int j = 0; j < cols; j++)
      {
        sum += arr[i][j];
      }
      cout<< sum << endl;
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
printRowSum(arr, rows, cols);
    return 0; 
}