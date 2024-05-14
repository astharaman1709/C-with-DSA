#include <iostream>
using namespace std;

// function declaration
//  int grade(int marks){ //marks is parameter here
//      if(marks>=90){
//          cout<< "A";
//      }
//      else if(marks>=80){
//            cout<< "B";
//      }
//      else if(marks>=70){
//            cout<< "C";
//      }
//      else if (marks>=60)
//      {
//            cout<< "D";
//      }
//    else{
//        cout<< "Fail";
//    }
//  }

// char grade(int marks){
//  if(marks>=90){
//         return 'A';
//  }
//     else if(marks>=80){
//           return 'B';
//     }
//     else if(marks>=70){
//           return 'C';
//     }
//     else if (marks>=60)
//     {
//           return 'D';
//     }
//   else{
//       return 'F';
//   }

// }

char grade(int marks)
{
    switch (marks / 10)
    {
    case 10:
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    default:
        return 'F';
    }
}
int main()
{
    int marks; // here marks is argument
    cout << "Enter the value of marks : ";
    cin >> marks;
    char Grade = grade(marks); // function calling
    cout << Grade << endl;


//For checking all the output
    // for (int i = 0; i <= 100; i++)
    // {
    //     char Grade = grade(i); // function calling
    //     cout << "Grade for marks = " << i << " is " << Grade << endl;
    // }

    return 0;
}