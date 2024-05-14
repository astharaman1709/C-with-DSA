#include<iostream>
using namespace std;


//function declaration

void printb(int b){
    cout<<b;
}
void printa(int a){
   int b=3;
   cout<<a;
   printb(b);
}


int main(){
    int a = 5;
    printa(a);//function calling
    return -1;
}