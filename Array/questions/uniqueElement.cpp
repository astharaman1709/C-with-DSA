#include<iostream>
#include<vector>
using namespace std;


int find(vector<int>arr){
   int ans = 0;
   for (int i = 0; i < arr.size(); i++)
   {
    ans ^=arr[i];
   }
   return ans;
}
int main(){

    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    vector<int>arr(n);

    cout<<"Enter the elements "<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }


   int uniqueElement = find(arr);
   cout<<"Unique element is : "<<uniqueElement;

   return 0;
}
