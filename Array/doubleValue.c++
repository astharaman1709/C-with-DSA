#include<iostream>
using namespace std;

int main(){
    int arr[10];
   int n ;
   cout<<"How many numbers you want to add in array"<<endl;
   cin>>n;
   cout<<"Enter the values"<<endl;
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }
   for (int i = 0; i < 10; i++)
   {
    cout<<2 * arr[i]<<" ";
   }
   

    return 0;
}