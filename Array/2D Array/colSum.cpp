#include<iostream>
using namespace std;


void printColSum(int arr[][3],int rows, int cols){ //putting col no. is mandatory
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
cout<<"col wise"<<endl;
     for (int i = 0; i < rows; i++)
     {
      for (int j = 0; j < cols; j++)
      {
        cin>>arr[j][i];
      }
      cout<<endl;
     }


     cout<<"Column wise"<<endl;
     for (int i = 0; i < rows; i++)
     {
      for (int j = 0; j < cols; j++)
      {
        cout<<arr[j][i]<<" ";
      }
      cout<<endl;
     }
printColSum(arr, rows, cols);
    return 0; 
}