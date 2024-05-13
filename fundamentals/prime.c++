#include <iostream>

using namespace std;

int main() {
   int num, i, isPrime = 1;  // Assume prime initially

   cout << "Enter a positive integer: ";
   cin >> num;

   // Handle non-positive inputs
   if (num <= 1) {
       isPrime = 0;  // Not prime
   } else {
       // Optimize by checking divisibility only up to the square root of num
       for (i = 2; i * i <= num; ++i) {
           if (num % i == 0) {
               isPrime = 0;  // Not prime if divisible by i
               break;
           }
       }
   }

   // Output the result
   if (isPrime) {
       cout << num << " is a prime number." << endl;
   } else {
       cout << num << " is not a prime number." << endl;
   }

   return 0;
}
