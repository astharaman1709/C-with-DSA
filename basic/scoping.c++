#include <iostream>
using namespace std;

int main()
{
    // declaration
    int a;

    // initialization
    int b = 15;

    // updation
    b = 5;

    //local variable scope
    if (true)
    {
        int b = 7;
        cout << b << endl; // 7
    }
    if (true)
    {
        cout << b << endl; // 5
    }
    // global varaible : can be accepted anymore in the file
    cout << b << endl;
}