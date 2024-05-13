#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int fact=1;
  if (n < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << n << " = " << fact << endl;
    }
  
 
}