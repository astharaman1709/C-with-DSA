#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int main(){

   vector<int>arr{1,3,4,6,7,9};
   vector<int>arr1{2,4,6,8};


    vector<int>ans;
    for (int i = 0; i <arr.size(); i++)
    {
       int element = INT_MIN;
      for (int j = 0; j < arr1.size(); j++)
      {
        if (element != INT_MIN)
        {
            ans.push_back(element);
        }
        
      }
      
    }
   for (auto value : ans)
   {
    cout << value << " ";
   }
   
   return 0;
}