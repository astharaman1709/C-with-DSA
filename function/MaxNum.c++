#include<iostream>
using namespace std;


//function declaration
int max2(int a, int b){
    if(a>b){
        cout<<a;
    }
    else{
         cout<<b;
    }
    return 0;
}
int max3(int a, int b, int c){
    if(a>b && a>c){
        cout<<a;
    }
    else{
      if(b>c){
        cout<<b;
      }
      else{
        cout<<c;
      }
    }
         
    
    return 0;
}



int main(){
   int a,b,c;
   cin>>a;
   cin>>b;
   cin>>c;//if we d nt provide any of the value we'll get a garbage result
   max3(a,b,c);
   return 1;
}