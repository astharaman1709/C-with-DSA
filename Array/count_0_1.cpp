#include<iostream>
using namespace std;

//Pass by reference
int main(){
    int arr[]={0,1,1,0,1,1,1,0,1,0,0,1,0};
    int size = 13;
   int numZero=0;
   int numOne=0;
   for (int i = 0; i < size; i++)
   {
    if (arr[i]==0)
    {
        numZero++;
    }
    if (arr[i]==1)
    {
     numOne++;
    }
   }
   cout<<"Number of 0's = "<<numZero<<endl;
      cout<<"Number of 1's = "<<numOne;

}
