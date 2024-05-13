#include <iostream>
using namespace std;

int main(){
    int a = 5;
    cout << "Value of a is "<<a<<endl;

    // char ch = 'a';
    char ch = 255;
    cout << "Value of ch is "<<ch<<endl;
    cout<<sizeof(ch)<<endl;

    long ln = 5;
    cout<< sizeof(ln)<<endl;

    unsigned int b = -9;//garbage value
     cout<<b<<endl;
    bool bl = false;//0
    cout << "Value of bl is "<<bl<<endl;

}