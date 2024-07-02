#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>arr;

//insert
arr.push_back(5);
arr.push_back(7);
arr.push_back(17);
for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

// remove elements
arr.pop_back();
for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}