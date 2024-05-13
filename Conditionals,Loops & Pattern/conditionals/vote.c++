#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter the age : "<<endl;
    cin>>age;

    if(age>=18){
        cout<<"You can vote "<<endl;
    }
  else{
      cout<<"You cannot vote"<<endl;
  }
}