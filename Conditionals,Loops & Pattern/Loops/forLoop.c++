#include <iostream>
using namespace std;

int main()
{

    // back counting
    //    for (int i = 5; i > 0; i--)
    //    {
    //     cout << i << endl;
    //    }

    // 2 4 6 8 10 12 14 16 18 20
    //     for (int i = 1; i <= 10; i++)
    //     {
    //      cout << 2*i << endl;
    //     }

    //      for (int i = 1; i < 10; i=i*2)
    //     {
    //      cout << i << endl;
    //     }

    for (int i = 100; i > 0; i = i / 2)
    {
        cout << i << endl;
    }

    for (int i = 5; (i>=0 && i<=10); i++)
    {
      cout << i <<endl; 
    }

// nothing is mandatory in the for loop apart from semicolon
    int i = 0;
    for ( ; ; )
    {
      if(i<5)  
      {
        cout << i << endl;
        i++;
      }
    }
    
}