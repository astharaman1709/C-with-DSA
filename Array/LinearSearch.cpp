#include<iostream>
using namespace std;

// bool find(int arr[], int size, int key){
//   for (int i = 0; i < size; i++)
//   {
//     if (arr[i]==key){return true;}   
//   }
//  return false; 
// }
// int main(){
//     int arr[]={5,7,17,77,67};
//     int size = 5;
//     cout<<"Enter the key you want to find"<<endl;
//     int key;
//     cin>>key;
//     if (find(arr,size,key)){
//         cout<<"Found";
//     }
//   else{
//     cout<<"Not found";
//   }
// return 0;
    

    int main(){
     int arr[]={5,7,17,77,67};
    int size = 5;
    int key=57;
    bool flag = 0; /*0=>NOT FOUND 1=>FOUND*/
   for (int i = 0; i < size; i++)
   {
    if (arr[i]==key){
        flag = 1;
    }
   }
   if(flag){
    cout<<"Found"<<endl;
   }
   else
       cout<<" Not Found"<<endl;

   return 0; 
    }

