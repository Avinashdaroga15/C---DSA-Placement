#include <iostream>

using namespace std;

// // Recursive fibonacci function
// int Fibonacci(int n) {

//   // Base Case
//   if (n == 0) return 0;
//   if (n == 1) return 1;
//   // Recursive Case
//   return Fibonacci(n - 1) + Fibonacci(n - 2);
// }

//non-Recursive fibonacci function
int Fibonacci(int n) {
int a=0,b=1,c;
  while (n-1)
  { 
    c=a+b;
    a=b;
    b=c;
    n--;
  }
  return b;
}

// main function
int main() {
  // Initialize variable n
  int n = 4;
  // Declare variable result
  int result;
  // Call fibonacci function in main and store its output in result
  result = Fibonacci(4);
  // Print value of result
  cout << n << "th Fibonacci number = " << result<<endl;
  return 0;
}