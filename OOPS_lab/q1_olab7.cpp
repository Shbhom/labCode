// 1.wap to create class student that store the name ,roll no age of a student
// derive a class mark from student that stores these object marks and
// respective average marks initialize the deatils at the time of initialzation
// of the object by taking the input from the user
// the details are to be input by calling the base class parameterized
// constructor

#include <cstring>
#include <iostream>

using namespace std;

class student {

protected:
  string name;
  int roll;
  int age;

public:
  student(string name, int roll, int age) {
    this->name = name;
    this->roll = roll;
    this->age = age;
  }
};

class marks : public student {
public:
  int mark[3];
  int avg;

public:
  void in2() {
    cout << "enter the marks of 3 subjects";
    for (int i = 0; i < 3; i++) {
      cin >> mark[i];
    }
  }
  void disp() {
    avg = 0;
    cout << name << endl;
    cout << roll << endl;
    cout << age << endl;
    for (int i = 0; i < 3; i++) {
      avg += mark[i];
      cout << mark[i] << endl;
    }
    avg /= 3;
    cout << endl << avg;
  }
  marks(string name, int roll, int age) : student(name, roll, age) {
    in2();
    disp();
  }
};

int main() {
  string name;
  int roll, age;
  cout << "name :";
  cin >> name;
  cout << "roll no :";
  cin >> roll;
  cout << "age :";
  cin >> age;
  marks m1(name, roll, age);
  return 0;
}
