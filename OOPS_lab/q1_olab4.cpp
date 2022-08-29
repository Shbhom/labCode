// Q1
/*Write a program to create a class “student” that stores the name,roll, age of
a student. Create another class “mark” which stores the three subject marks and
grade. Input the details of a student by using necessary member function. Print
all the details by making a member function of “mark” class friendly to
“student” class.*/
#include <iostream>
#include <string>
using namespace std;
class student;
class mark {
  int marks[3];
  char grade[3];

public:
  friend void display(student, mark);
  friend void getdata(student, mark);
};
class student {
  int roll, age;
  string name;

public:
  friend void getdata(student, mark);
  friend void display(student, mark);
};

void display(student x, mark y) {
  cout << "Enter the name of the student" << endl;
  cout << x.name << endl;
  cout << "Enter the age and roll number of the student" << endl;
  cout << x.age << endl << x.roll << endl;
  cout << "Enter the number of 3 subjects" << endl;
  for (int i = 0; i < 3; i++) {
    cout << y.marks[i] << endl;
  }
  cout << "Enter the grades of 3 subjects" << endl;
  for (int i = 0; i < 3; i++) {
    cout << y.grade[i] << endl;
  }
}
void getdata(student x, mark y) {
  cout << "Enter the name of the student" << endl;
  cin >> x.name;
  cout << "Enter the age and roll number of the student" << endl;
  cin >> x.age >> x.roll;
  cout << "Enter the number of 3 subjects" << endl;
  for (int i = 0; i < 3; i++) {
    cin >> y.marks[i];
  }
  cout << "Enter the grades of 3 subjects" << endl;
  for (int i = 0; i < 3; i++) {
    cin >> y.grade[i];
  }
}

int main(int argc, char *argv[]) {
  student s[2];
  mark m[2];
  getdata(s[0], m[0]);
  for (int i = 0; i < 2; i++) {
    display(s[i], m[i]);
  }

  return 0;
}
