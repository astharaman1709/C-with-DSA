#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // numeric half pyramid
        for (int col = row+1; col <= n; col++)
        {
           if (col == row + 1 || col == n || row == 0)
           {
             cout << col;
           }
           else{
            cout<<" ";
           }
           
           }
             cout << endl;
        }
      
    
}