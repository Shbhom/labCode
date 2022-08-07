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
    cout << "Enter the roll : ";
    cin >> roll;
    int sum = 0;
    cout << "Enter the marks of student in 3 subjects : ";
    for (int i = 0; i < 3; i++) {
      cin >> marks[i];
      sum += marks[i];
    }
    avg_marks = sum / 3.0;
  }
  void show() {
    cout << "Name of the student is : " << name << endl;
    cout << "Roll no of the student is : " << roll << endl;
    cout << "Marks secured by the student are : ";
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
  s[2].get();
  cout << "\n\n";
  s[0].show();
  s[1].show();
  s[2].show();
  return 0;
}
