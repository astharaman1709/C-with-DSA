#include<iostream>
#include<vector>

using namespace std;


int main(){

   vector<int>arr{1,3,4,6,7,9};
     int sum=10;
    for (int i = 0; i <arr.size(); i++)
    {
       int element = arr[i];
      for (int j = i+1; j < arr.size(); j++)
      {
        //cout << "("<<element<<","<<arr[j]<<")"<<endl;
        if (element + arr[j] == sum)
        {
            cout<<"Element found "<<element<<","<<arr[j]<<endl;
        }
        
     }
        
      }
      return 0;
    }
