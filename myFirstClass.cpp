#include <iostream>
// Include the file library
#include <fstream>
// Include the string library
#include <string>
// Include the cmath library to use math functions such as sqrt, log or round
#include <cmath>
using namespace std;

// C++ is Object Oriented Programming

/* Object-oriented programming has several advantages over procedural programming:

  - OOP is faster and easier to execute
  - OOP provides a clear structure for the programs
  - OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
  - OOP makes it possible to create full reusable applications with less code and shorter development time */

// CLASS
// Create a Car class with some attributes
class Car {
  public:
    string brand;   
    string model;
    int year;
    bool driving = false;
    int speed(int maxSpeed);

    void drive() {
        driving = true;
    }

    void brake();

    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Method/function definition outside the class
void Car::brake() {
  cout << "Obstacle! Braking!!! \n";
}

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

// CONSTRUCTOR

class PreBuiltCar {
    public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute

    // CONSTRUCTOR
    /* The constructor has the same name as the class, 
    it is always public, 
    and it does not have any return value. */

    PreBuiltCar(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

// CONSTRUCTOR FROM OUTSIDE

class BuildMyCar {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    BuildMyCar(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
BuildMyCar::BuildMyCar(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

// ENCAPSULATION
/* It is considered good practice to declare your class attributes as private (as often as you can). 
Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts.
Increased security of data
*/

class Employee {
  private:
    // Private attribute
    int salary;
  protected:
    int salaryScale;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

// INHERITANCE : DERIVED CLASS

class Vehicle: public Car {
  public:
    string model = "Mustang";
};

class CompanyCar: public Vehicle, public Employee {
};

class Programmer: public Employee {
  public:
    void setScale(int s) {
      salaryScale = s;
    }
    int getScale() {
      return salaryScale;
    }
};

// POLYMORPHISM
// Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
  }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
}; 

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

  carObj1.drive();
  string statmt = (carObj1.driving) ? "Your car is driving!" : "Uh-uh. Your car is parked";
  cout << statmt << "\n";

  carObj1.brake();

  cout << "Maximum speed for this car is: " << carObj1.speed(200) << "\n";

  // Create PreBuiltCar objects and call the constructor with different values
  PreBuiltCar myFirstCar("BMW", "X5", 1999);
  PreBuiltCar mySecondCar("Ford", "Mustang", 1969);

  // Print values
  cout << myFirstCar.brand << " " << myFirstCar.model << " " << myFirstCar.year << "\n";
  cout << mySecondCar.brand << " " << mySecondCar.model << " " << mySecondCar.year << "\n";

  // Create BuildMyCar objects and call the outside constructor with different values
  BuildMyCar car1("BMW", "X5", 1999);
  BuildMyCar car2("Ford", "Mustang", 1969);

  // Print values
  cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
  cout << car2.brand << " " << car2.model << " " << car2.year << "\n";

  Employee someEmployee;
  someEmployee.setSalary(2000);
  cout << someEmployee.getSalary() << "\n";

  Vehicle myVehicle;
  myVehicle.honk();
  cout << myVehicle.brand + " " + myVehicle.model << "\n";

  CompanyCar myWorkCar;
  cout << "I get a " << myWorkCar.brand << " from my job, on top of my salary (" << myWorkCar.getSalary() << ")\n";

  Programmer progEmployee;
  progEmployee.setScale(10);
  cout << "Salary scale: " << progEmployee.getScale() << "\n";

  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();

  // FILE MANIPULATION
  // CREATE AND WRITE TO FILE
  // Create and open a text file
  ofstream MyFile("filename.txt"); // ofstream creates and writes to files

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();

  // READ FILE
  // Create a text string, which is used to output the text file
  string myText;
  
  // Read from the text file
  ifstream MyReadFile("filename.txt"); // ifstream reads from files
  
  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
      // Output the text from the file
      cout << myText;
  }
  
  // Close the file
  MyReadFile.close(); 

  return 0;
}