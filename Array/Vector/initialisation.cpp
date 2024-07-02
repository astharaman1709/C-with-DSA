#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>arr;
// vector<char>arr;
// vector<bool>arr;
int ans = (sizeof(arr)/sizeof(int)); //compiler dependent 
cout<<ans<<endl;
cout<<arr.size()<<endl;//number of elements in the array
cout<<arr.capacity()<<endl;//return the number of elements thst can be held in currently allocated storage

    return 0;
}