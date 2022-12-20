// WAP to create a class employee that stores the employee name, age and monthly
// salary. Overload the binary + operator to add user defined incentive
// to the monthly salary and display it.
//(i)Object + incentive value
//(ii)Incentive+ operator

#include <iostream>
#include <string>
using namespace std;

class employee {
  string name;
  int age, monSal, i;

public:
  employee() {
    cout << "Enter the employee name :";
    cin >> name;
    cout << "Enter the employee's monthly salary :";
    cin >> monSal;
    cout << "Enter the employee's age :";
    cin >> age;
  }

  void operator+(int i) { this->monSal = this->monSal + i; }
  void disp() {
    cout << "Name of the employee : " << name << endl;
    cout << "age of the employee : " << age << endl;
    cout << "monthly salary of the employee : " << monSal << endl;
  }
};

int main() {
  employee em1;
  int inc;
  cout << "Enter the incentive amount";
  cin >> inc;
  em1 + inc;
  em1.disp();
  return 0;
}
