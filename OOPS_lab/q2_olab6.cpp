// considering  question 1 details, students and marks are two independent
// classes. Derive a class "grade" from "student" and "marks" which is having
// grade as its member. IF avgmark>90 (grade O) .....avg mark<90 and avg mark >
// 80 ( grade B) else assign grade as C. Input the details and display all the
// details of a student.

#include <iostream>
#include <string>
using namespace std;
class mark;
class grade;
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
  friend void display(student, mark, grade);
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
  friend void display(student, mark, grade);
  friend void get_grade(grade, mark);
};

class grade {
  string grades[3];

public:
  friend void get_grade(grade, mark);
  friend void display(student, mark, grade);
};

void get_grade(grade a, mark b) {
  for (int i = 0; i < 3; i++) {
    if (b.marks[i] < 100 && b.marks[i] >= 90) {
      a.grades[i] = "A";
    } else if (70 <= b.marks[i] && b.marks[i] >= 80) {
      a.grades[i] = "B";
    } else if (60 <= b.marks[i] && b.marks[i] >= 70) {
      a.grades[i] = "C";
    } else if (70 <= b.marks[i] && b.marks[i] >= 60) {
      a.grades[i] = "D";
    } else if (60 <= b.marks[i] && b.marks[i] >= 50) {
      a.grades[i] = "E";
    } else {
      a.grades[i] = "F";
    }
  }
  cout << a.grades[1] << endl;
}

void display(student a, mark b, grade c) {
  cout << "name : " << a.name << endl;
  cout << "roll number : " << a.roll << endl;
  cout << "section number : " << a.sec_name << endl;
  cout << "marks : ";
  for (int i = 0; i < 3; i++) {
    cout << b.marks[i] << " : " << c.grades[i];
  }
  cout << endl << "average marks : " << b.avg << endl;
}

int main() {
  student s[2];
  mark m[2];
  grade g[2];
  for (int i = 0; i < 2; i++) {
    get_grade(g[i], m[i]);
    display(s[i], m[i], g[i]);
  }
  return 0;
}
