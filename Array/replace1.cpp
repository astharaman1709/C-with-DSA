#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 8, 9, 5, 7};
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    //     int arr[10] = {1,8,9,5,7};
    //    for (int i = 0; i < 10; i++)
    //    {
    //     cout<<arr[i]<<" ";
    //    }

    // initialise the entire array with 0
    //        int arr[10] = {0};
    //    for (int i = 0; i < 10; i++)
    //    {
    //     cout<<arr[i]<<" ";
    //    }

    // garbage values
    //      int arr[10;
    //    for (int i = 0; i < 10; i++)
    //    {
    //     cout<<arr[i]<<" ";
    //    }
   
    return 0;
}