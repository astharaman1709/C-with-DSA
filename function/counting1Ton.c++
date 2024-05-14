#include<iostream>
using namespace std;


//function declaration
void count(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<endl;
    }
    
}

int main(){
    count();//function calling
    return -1;
}