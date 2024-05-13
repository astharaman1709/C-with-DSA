#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for (int row = 0; row <= n; row++)
    {
        /* code */
        for (int space = 0; space <  n-row-1; space++)
        {
            /* code */
            cout<<" ";
        }
        for (int col = 0;col  < 2*row+1; col++)
        {
            if (col==0){
                 cout<<"* ";//first character
            }
            if (col==2*row)//last character
            {
            cout<<"* ";
            }
            else
            {
            cout<<" ";
            }
            
        }
        cout<<endl;
    }
    for (int row = 0; row <= n; row++)
    {
     //space
   for (int col = 0; col < row; col++)
        {
            /* code */
            cout<<" ";
        }  

        //star
        for (int star = 0; star< 2*row-1; star++)
        {
         if (star == 0|| star==2*n-2*row-1)
         {
          cout<<"*";    
      }
         else{
             cout<<" ";
        }
       
    }
     cout<<endl;
}
}