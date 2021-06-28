#include <iostream>
// Include the string library
#include <string>
// Include the cmath library to use math functions such as sqrt, log or round
#include <cmath>
using namespace std;

/* The code below will print the words Hello World!
to the screen, and it is amazing */


int main() {
  const int myNum = 15; // define variable with type int. Make it constant: it can never change
  double myBool; // declare variable without assigned value
  float f1 = 35e3;
  double d1 = 12E4;
  /* Note on double VS float: 
  The precision of a floating point value indicates how many digits the value can have after the decimal point. 
  The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. 
  Therefore it is safer to use double for most calculations. */
  char a = 65, b = 66, c = 67; // will return 'A', 'B', 'C'
  myBool = true;
  int x = 5, y = 6, z = 50; // declare multiple vars of same type at once
  string myString = "hola";
  

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

  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName.append(lastName); // or string fullName = firstName + lastName;
  cout << fullName + "\n"; 
  cout << "The name " + fullName + "contains " << fullName.length() << " letters\n"; // or fullName.size()
  cout << fullName + "has initials " + firstName[0] + lastName[0];

  string userName;
  cout << "Type your full name: ";
  getline (cin, userName); // a regular cin >> userName would only return the first string before space, e.g. Claire instead of Claire Guerin
  cout << "Your name is: " << userName;

  cout << sqrt(64);
  cout << round(2.6);
  cout << log(2);

  if (x < y) {
    cout << "x is greater than y";
  } else if (x == y) {
    cout << "x is y";
  } else {
    cout << "x is smaller than y";
  }

  int time = 20;
  string result = (time < 18) ? "Good day." : "Good evening."; // ternary operator = short hand for if... else statement
  cout << result; 

  return 0; 
}