#include<iostream>
#include<cmath>
using namespace std;


//division method
int binaryToDecimal(int n){
    int decimal = 0;
    int i = 0;
    while (n>0)
    {
        int bit = n% 2;
        decimal =decimal + bit * pow(2, i++);
        n = n / 10;
    }
   return decimal; 
}


int main(){
    int num ;
    cin>>num;
    int decimal = binaryToDecimal(num);
    cout<<decimal<<endl;
}