#include <iostream>
using namespace std;

/* The code below will print the words Hello World!
to the screen, and it is amazing */


int main() {
  const int myNum = 15; // define variable with type int. Make it constant: it can never change
  double myBool; // declare variable without assigned value
  myBool = true;
  int x = 5, y = 6, z = 50; // declare multiple vars of same type at once
  

  // static_cast<double>(myNum) // this forces a type change from a int variable to double. It is usually considered bad practice.

  cout << "Hello World!\n\n";
  cout << "I am learning C++\n\n"; // it also says I'm learning cpp
  cout << myNum << "\n\n"; // "<<" means "flush to the cout buffer"
  cout << myBool << "\n\n";
  cout << x + y + z << "\n\n";

  int inputNum1, inputNum2; 
  cout << "Type a number: "; // Type a number and press enter
  cin >> inputNum1; // Get user input from the keyboard
  cout << "Type another number: ";
  cin >> inputNum2;
  const int sum = inputNum1 + inputNum2;
  cout << "Sum is: " << sum;

  return 0; 
}