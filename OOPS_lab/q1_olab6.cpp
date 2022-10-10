// q1.write a program to create a class student having the name , roll no.,
// section name as its member. Create another class marks which stores 3 subject
// marks and average mark of a student and is derived from student class. Input
// the details of two students and display all the details.

#include <iostream>
#include <string>
using namespace std;
class mark;
class student {
  string name;
  int roll;
  int sec_name;

public:
  student() {
    cout << "enter name : ";
    cin >> name;
    cout << "enter roll number : ";
    cin >> roll;
    cout << "enter section number : ";
    cin >> sec_name;
  }
  friend void display(student, mark);
};

class mark {
  int marks[3];
  float avg = 0;

public:
  mark() {
    cout << "enter the marks in 3 subs : ";
    for (int i = 0; i < 3; i++) {
      cin >> marks[i];
      avg += marks[i];
    }
    avg /= 3.0;
    // cout << avg;
  }
  friend void display(student, mark);
};

void display(student a, mark b) {
  cout << "name : " << a.name << endl;
  cout << "roll number : " << a.roll << endl;
  cout << "section number : " << a.sec_name << endl;
  cout << "marks : ";
  for (int i = 0; i < 3; i++) {
    cout << b.marks[i];
  }
  cout << endl << "average marks : " << b.avg << endl;
}

int main() {
  student s[2];
  mark m[2];
  for (int i = 0; i < 2; i++) {
    display(s[i], m[i]);
  }
  return 0;
}
