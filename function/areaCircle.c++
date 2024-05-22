#include<iostream>
using namespace std;

double area(int radius){
    float pi = 3.14;
    double area = pi * radius * radius;
    return area;
}

int main(){
    int r;
    cout<<"Enter the value of the radius of the circle : ";
    cin>>r;

    double ans = area(r);
    cout<<"The area of the circle is : "<<ans<<endl;
}