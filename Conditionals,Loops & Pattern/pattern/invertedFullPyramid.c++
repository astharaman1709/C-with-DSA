#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
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