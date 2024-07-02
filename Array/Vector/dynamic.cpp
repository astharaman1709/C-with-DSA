#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> arr(n,-1);
    cout << "Size of the array is " << arr.size() << endl;
    cout << "Capacity of the array is " << arr.capacity() << endl;



//values are initialise with -1
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
 
 //fixed element
    vector<int>arr1{10,17,18,19};
     for (int i = 0; i < arr.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout<<"Vector Arr1 is empty or not : "<<arr1.empty()<<endl;;

    vector<int>arr2;
        cout<<"Vector Arr3 is empty or not : "<<arr2.empty();
    return 0;
}