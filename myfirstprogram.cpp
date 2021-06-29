#include <iostream>
// Include the string library
#include <string>
// Include the cmath library to use math functions such as sqrt, log or round
#include <cmath>
using namespace std;

/* The code below will print the words Hello World!
to the screen, and it is amazing */


int main() {

  // DECLARING VARIABLES AND TYPES

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

  // USER INPUT

  int inputNum1, inputNum2; 
  cout << "Type a number: "; // Type a number and press enter
  cin >> inputNum1; // Get user input from the keyboard
  cout << "Type another number: ";
  cin >> inputNum2;
  const int sum = inputNum1 + inputNum2;
  cout << "Sum is: " << sum;

  // APPENDING STRINGS

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

  // OPERATORS

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

  // SWITCH

  int day = 4;
  switch (day) {
    case 1:
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thursday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
    case 7:
      cout << "Sunday";
      break;
  }

  switch (day) {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
}

// WHILE LOOPS

int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}

int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);

// ARRAYS

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];
cars[0] = "Opel";
for(int i = 0; i < 4; i++) {
  cout << i << ": " << cars[i] << "\n";
}

string fruits[] = {"apple", "pear"}; /* if no size specified, the array will only be as big as the original size. 
To add elements, you need to overwrite the whole array.*/

string veggies[5] = {"carrot", "eggplant", "green peas"}; // pre-allocate space for five items in total
veggies[3] = "khale";
veggies[4] = "asparagus";
cout << veggies << "\n";

// REFERENCES & POINTERS
/* References and Pointers are important in C++, because they give the ability to manipulate the data in the computer's memory 
-- which can reduce the code and improve the performance. */

string food = "Pizza";
string &meal = food; // meal refers to food

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza
cout << &food; // Outputs memory address of variable food in hexadecimal form (0x..)

string* p_food = &food; /* A pointer variable, with the name p_food, that stores the address of food, 
and which matches the type of the corresponding variable. */

// Reference: Output the memory address of food with the pointer (0x..)
cout << p_food << "\n";
// Dereference: Output the value of food with the pointer (Pizza)
cout << *p_food << "\n";

*p_food = "Hamburger"; // Change the value of the pointer
cout << *p_food << "\n"; // Output the new value of the pointer (Hamburger)
cout << food << "\n"; // Output the new value of the food variable (Hamburger)

return 0; 
}