#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        int col;
        for ( col = 0;  col < row+1 ;  col++)
        {
            cout<<col+1;
        }

        //reverse counting
        // col--;
        // for (; col >=1 ; col--)
        // {
        //     /* code */
        //     cout<<col;
        // }
        for (int col = row; col >=1 ; col--)
        {
            /* code */
             cout<<col;
        }
        
        
        cout<<endl;
    }
    

}