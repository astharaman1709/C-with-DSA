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
    

}