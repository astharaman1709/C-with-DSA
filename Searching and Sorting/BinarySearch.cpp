#include<iostream>
using namespace std;


int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    int mid = (start+end) / 2;

    while (start <= end)
    {
        /* code */
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
       else if(target < element){
        //left 
        end = mid -1;
       } 
       mid = (start + end)/2;
    }
   return -1; 
}
int main(){
    int arr[] = {2,8,9,4,6,7};
    int target = 9;
     int size = 6;

    int indexOfTarget = binarySearch(arr, size, target);
    if (indexOfTarget == -1)
    {
        cout << "Target not found" << endl;
    }
    else{
         cout << "Target found at "<< indexOfTarget << endl;

    }
    return 0;
}