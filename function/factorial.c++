#include<iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
  for (int i = 1; i <= n; i++)
  {
    if (n%i==0)
    {
        ans*=i;
    }
    return ans;
  }
  
   return 0; 
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    int ans = factorial(n);
    cout<<ans;
}