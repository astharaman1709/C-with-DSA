#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // half pyramid
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        // space full pyramid
        for (int space = 0; space < 2 * row + 1; space++)

        {
            /* code */
            cout << " ";
        }
        // half pyramid
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

 
    for (int row = 0; row < n; row++)
    {
        // half pyramid
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        // space full pyramid
        for (int space = 0; space < 2*n-2*row-1; space++)

        {
            /* code */
            cout << " ";
        }
        // half pyramid
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
   
}