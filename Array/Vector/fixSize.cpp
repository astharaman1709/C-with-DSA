#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr(10);
    cout << "Size of the array is " << arr.size() << endl;
    cout << "Capacity of the array is " << arr.capacity() << endl;



//values are initialise with 0
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}