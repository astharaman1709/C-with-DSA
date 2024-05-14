#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0;  col < row ;  col++)
        {
            cout<<col+1<<" ";
        }
        cout<<endl;
    }

    //another logic
     for (int row = 0; row < n; row++){
        int num = row+1;
       for (int col = 0; col < row+1;col++)
       {
        cout<<num<<" ";
        num=num+1;
       }
    

    //other logic
    //    for (int col = 0; col < row+1; col++)
    //    {
    //     cout<<row+col+1<<" ";
    //    }
      cout<<endl; 
     }
}