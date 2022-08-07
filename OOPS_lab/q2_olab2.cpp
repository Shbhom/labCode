#include <iostream>
using namespace std;
struct student {
  char name[20];
  int roll;
  int marks[3];
  float avg_marks;
  void get() {
    cout << "Enter the name : ";
    cin >> name;
    cout << "Enter the roll number: ";
    cin >> roll;
    int sum = 0;
    cout << "Enter the marks in 3 subjects : ";
    for (int i = 0; i < 3; i++) {
      cin >> marks[i];
      sum += marks[i];
    }
    avg_marks = sum / 3.0;
  }
  void show() {
    cout << "Name : " << name << endl;
    cout << "Roll : " << roll << endl;
    cout << "Marks : ";
    for (int i = 0; i < 3; i++) {
      cout << marks[i] << " ";
    }
    cout << "\naverage marks is : " << avg_marks;
  }
};

int main() {
  struct student s[2];
  s[0].get();
  s[1].get();
  cout << "\n\n";
  cout << "The student with the highest score is : " << endl;
  if (s[0].avg_marks > s[1].avg_marks) {
    s[0].show();
  } else if (s[0].avg_marks == s[1].avg_marks) {
    cout << "Both have got same score";
  } else {
    s[1].show();
  }
  return 0;
}
