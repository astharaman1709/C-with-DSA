#include<iostream>
using namespace std;

int main(){
  int a = 4;
   cout<<(a<<2)<<endl; //16 Left shift num * 2(1) & num * 2*2
   cout<<(a<<-88)<<endl; //garbage value
     cout<<(a>>-88)<<endl;//0
   cout<<(a<<1)<<endl; //2
   cout<<(a>>2)<<endl; //1 right shift num / 2
}