//  3. WAP to create a class employee that stores the name salary and grade of
//  an employee overload the new operator to allocate memory and then stores the
//  value also overload the delete operator to deallocate operator to delete the
//  member also add the constructor and deconstructor in the program
//  using neccessary member function assign the name of the employee and display
//  it

#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <new>
#include <stdexcept>
#include <string>
using namespace std;

class employee {
  string name;
  int sal;
  char grade;

public:
  employee(string name, int sal, char grade) {
    this->name = name;
    this->sal = sal;
    this->grade = grade;
  }
  void *operator new(size_t size) {
    void *p;
    p = malloc(size);
    return p;
  }

  void operator delete(void *p) {
    cout << "memory deallocated";
    free(p);
  }

  void print() {
    cout << "name : " << name << endl;
    cout << "salary : " << sal << endl;
    cout << "grade : " << grade << endl;
  }
};

int main() {
  employee *e1;
  e1 = new employee("shubhom", 10000, 'A');
  e1->print();
  delete e1;
  return 0;
}
