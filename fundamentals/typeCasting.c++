#include<iostream>
using namespace std;

int main(){
    //implicit type casting
    char ch = 66;//B
    cout<<ch<<endl;

    int a = 'a';//970
    cout<<a<<endl;

    //explicit type casting
    double d = 5.77777;
    int i = (int)d+2;//7
    cout<<i<<endl;
}