#include <iostream>
using namespace std;

int main()
{
    // static array
    int arr[] = {5, 7, 8, 4, 9};
    int arr1[5] = {5, 7, 8, 4, 9};
    int arr2[10] = {5, 7, 8, 4, 9};

    /*array out of bound
     int arr1[4]={5,7,8,4,9};*/

     //Accessing
    cout << arr[0]<<endl;
    cout << arr[2]<<endl;
    cout << arr[1]<<endl;/*Value at[arr]+index*datatype => value at[arr + 1*4]*/
    cout << arr[4]<<endl;

    //printing all
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<endl;
    }
    

    cout << " Created successfully" << endl; /*showing array's base address*/
    return 0;
}