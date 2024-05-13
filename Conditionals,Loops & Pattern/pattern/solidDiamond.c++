#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    //full pyramid
    for (int row = 0; row <= n; row++)
    {
        /* code */
        for (int space = 0; space <  n-row-1; space++)
        {
            /* code */
            cout<<" ";
        }
        for (int star = 0; star < row+1; star++)
        {
            /* code */
            cout<<"* ";
        }
        cout<<endl;
    }

    //inverted pyramid
     for (int row = 0; row < n; row++)
    {
        /* code */
        for (int space = 0; space <  row; space++)
        {
            /* code */
            cout<<" ";
        }
        for (int star = 0; star < n-row; star++)
        {
            /* code */
            cout<<"* ";
        }
        cout<<endl;
    }
}