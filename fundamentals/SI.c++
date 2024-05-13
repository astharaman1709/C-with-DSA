#include<iostream>
using namespace std;

int main(){
    int p,r,t;
    cout<<"Enter the value of Principle, rate and time(in years) respectively : "<<endl;
    cin>>p;
    cin>>r;
    cin>>t;
    int si= (p*r*t)/100;
    cout<<"The perimeter is : "<<si<<endl;
}