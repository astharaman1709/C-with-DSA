#include<iostream>
#include<vector>
using namespace std;


int Union(vector<int>arr){
   int ans = 0;
   for (int i = 0; i < arr.size(); i++)
   {
    ans ^=arr[i];
   }
   return ans;
}
int main(){

    int arr[]={1,3,4,5,7,9};
    int size=6;
    int arr1[]={2,4,6,8};
    int size1=4;


    vector<int>ans;
    for (int i = 0; i <size; i++)
    {
        ans.push_back(arr[i]);
    }


   for (int i = 0; i <size1; i++)
    {
        ans.push_back(arr1[i]);
    }

 for (int i = 0; i <ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

   return 0;
}