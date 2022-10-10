// write a program to create a class employee having employee name ,age and id
// as is member. Derive a class from employee in private mode. having department
// name and department id as its private number. Derive a class grade from
// department having grade (a or b) and basic salary of an employee.Input the
// details of the employee and display

#include <iostream>
#include <string>
using namespace std;

class employee {
public:
  string name;
  int age;
  int id;

public:
  void get() {
    cout << "Enter employee name : ";
    cin >> name;
    cout << "Enter age :";
    cin >> age;
    cout << "Enter id :";
    cin >> id;
  }
};

class dept : private employee {
public:
  string dept_name;
  int dept_id;

  void get() {
    cout << "Enter department name : ";
    cin >> dept_name;
    cout << "Enter department id : ";
    cin >> dept_id;
  }
};

class grade : private dept {
  int grade;
  int basic_sal;

public:
  void get() {
    cout << "Enter grade : ";
    cin >> grade;
    cout << "Enter monthly salary : ";
    cin >> basic_sal;
  }
};
