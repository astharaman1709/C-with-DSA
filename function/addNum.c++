#include<iostream>
using namespace std;


//function declaration
// int add(int a, int b){
//     int n = a+b;
//     cout<<n;
//     return 0;
// }


// int main(){
//    int a,b;
//    cin>>a;
//    cin>>b;
//     add(a,b);
//    return 1;
// }


int add(int x, int y){
    int n = x+y;
    return n;
}

int main(){
   int a,b;
   cin>>a;
   cin>>b;
   int sum = add(a,b);
   cout<<"The sum is: "<<sum<<endl;
   return 1;
}


