#include<iostream>
using namespace std;

int main(){
    int a = 5; //6  //7  //6
    
    cout << a++ <<endl; //5
    cout << ++a << endl;  //7
    cout << a-- << endl;  //7
    cout << --a << endl;  //5
    cout << (++a)*(a++)<<endl;//6*6=36 but output will be 42 because  this is compiler dependent
  
}