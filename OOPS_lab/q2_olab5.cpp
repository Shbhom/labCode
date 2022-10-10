/*2.write  a program to create a class employee having employee name, department
 * name, id , monthly salary as its member. Initialize the details by accepting
 * input from keyboard and user defined parametrized constructor function.
 * Create a user defined copy constructor to copy the properties of one instance
 * to another and display the details by calling a friend function.*/

#include <iostream>
#include <string>
#include <utility>
using namespace std;

class employee {
  string name;
  string dept;
  int id;
  int mon_sal;

public:
  void get() {
    cout << "Enter the name of the employee : ";
    cin >> name;
    cout << "Enter the id : ";
    cin >> id;
    cout << "department : ";
    cin >> dept;
    cout << "Enter the monthly salary : ";
    cin >> mon_sal;
  }
  friend void show(employee a);
  employee() { get(); }
  employee(employee &k) {
    name = k.name;
    id = k.id;
    dept = k.dept;
    mon_sal = k.mon_sal;
  }
};

void show(employee a) {
  cout << "Name of the employee : " << a.name << endl;
  cout << "id : " << a.id << endl;
  cout << "Department : " << a.dept << endl;
  cout << "Monthly Salary : " << a.mon_sal << endl;
}

int main() {
  employee e1;
  employee e2(e1);
  show(e1);
  show(e2);
  return 0;
}
