#include<iostream>
using namespace std;

int findEvenOdd(int n){
    if (n%2==0)
    {
        cout<<"The number "<<n<<" is "<<"even";
    }
    else{
         cout<<"The number "<<n<<" is "<<"odd";
    }
   return 0; 
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    findEvenOdd(n);
}