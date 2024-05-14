#include<iostream>
using namespace std;

int main(){
     int a = true;
     int b = false;

   cout<<(a&b)<<endl;//false (0)
   cout<<(a^b)<<endl;//true (1)
   cout<<(a|b)<<endl;//true (1)
   cout<<~(a)<<endl; //false-2 as the twos complement
}