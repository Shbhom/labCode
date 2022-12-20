// Write a pogram to add one static and one non static data member to user
// defined class and access them by static and non static member functions
// respectively.
#include <iostream>
using namespace std;

class student {
public:
  static int count;
  int rollno;
  char name[20];
  student() { count++; }
  static void dis() { cout << "Total number of students: " << count << endl; }
  void getRoll() {
    cout << "Name: ";
    cin >> name;
    cout << "Roll number: ";
    cin >> rollno;
  }
  void display() {
    cout << "Name: " << name << endl;
    cout << "Roll number: " << rollno << endl;
  }
};
int student::count = 0;
int main() {
  student s1, s2;
  s1.getRoll();
  s2.getRoll();
  student::dis();
  s1.display();
  s2.display();
  return 0;
}
