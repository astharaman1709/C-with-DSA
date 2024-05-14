#include<iostream>
using namespace std;


//Creating copies of the values instead of passing the actual value
void print(int num){
    ++num;//15
     cout<<"Address of num in print() is : "<< &num <<endl;
    num++;//16
    num++;//17
    cout<<"Address of num in print() is : "<< &num ;
    cout<<num<<endl;//17
    cout<<"Address of num in print() is : "<< &num ;
    --num;//16
    cout<<num<<endl;//16

}

int main(){
   int num = 12;
   cout<<"Address of num in main() is : "<< &num <<endl;
   num++;//13
   ++num;//14
   cout<<"From the function"<<endl;
   print(num);//15
   --num;//13
   cout<<"After drecrement from main()"<<endl;
   cout<<num;//13
}