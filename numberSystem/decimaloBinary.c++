#include<iostream>
#include<cmath>
using namespace std;


//for remainder
// int decimalToBinaryMethod(int n){
    
//     while (n>0)
//     {
//         int bit = n% 2;
//        cout << bit <<endl;
//         n = n / 2;
//     }
//    return 0; 
// }

//division method
int decimalToBinaryMethod(int n){
    int binary = 0;
    int i = 0;
    while (n>0)
    {
        int bit = n% 2;
        binary = bit * pow(10, i)+binary;
        n = n / 2;
    }
   return binary; 
}

//bitwise method
int decimalToBinaryMethod(int n){
    int binary = 0;
    int i = 0;
    while (n>0)
    {
        int bit = n & 1;
        binary = bit * pow(10, i)+binary;
        n = n >> 1;
    }
   return binary; 
}
int main(){
    int num ;
    cin>>num;
    int num = decimalToBinaryMethod(num);
    cout<<num<<endl;
}