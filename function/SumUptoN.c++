#include<iostream>
using namespace std;


//sum upto given number
int sum(int num){
    int sum = 0;
    for (int i = 1; i <=num ; i++)
    {
        sum+=i;
    }
    return sum;
}

//sum f even no. upto given number
// int even(int num){
//     int sum = 0;
//     for (int i = 0; i <=num; i++)
//     {
//        if(i%2==0){
//         sum +=i; 
//     }
//     }
    
//     return sum;
// }
int even(int num){
    int sum = 0;
    for (int i = 2; i <=num; i=i+2)
    {
       if(i%2==0){
        sum +=i; 
    }
    }
    
    return sum;
}
int main(){
  int num;
  cout<<"Enter the number : ";
  cin>>num;
  int ans =  even(num);
  cout<<"The sum of Even no. upto given number is "<<num<<" is "<<ans<<endl;
}