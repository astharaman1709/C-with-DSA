#include<iostream>
#include<vector>
using namespace std;



int main(){

   vector<int>arr{1,3,4,5,7,9};
   vector<int>arr1{2,4,6,8};


    vector<int>ans;
    for (int i = 0; i <arr.size(); i++)
    {
       int element = arr[i];
      for (int j = 0; j < arr1.size(); j++)
      {
        if (element == arr1[j])
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