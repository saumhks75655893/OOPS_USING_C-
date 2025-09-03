#include <iostream>
using namespace std;

class MyClass // class creation
{

public:
  string name;
  int age;
  void displayMessage() // function creation
  {
    cout << "Hello from MyClass!" << endl;
  }
  MyClass() // default constructor
  {
    cout << "Constructor called!" << endl;
  }

  MyClass(string name, int age) // parametrized constructor
  {
    cout << "Name: " << name << ", Age: " << age << endl;
    this->name = name;
    this->age = age;
  }
  void displayNameAndAge() // function creation
  {
    cout << "Name: " << name << ", Age: " << age << endl;
  }
};

int main()
{
  MyClass obj("Himanshu Kumar", 34);
  obj.displayMessage();
  obj.displayNameAndAge();
  return 0;
}