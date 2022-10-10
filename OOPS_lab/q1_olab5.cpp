/*1.write a program  to create a  class  student having name , roll number and
 * subject mark as its member. Initialize the details of two students at the
 * time of creation where the name and subject marks are decided at the time of
 * creation. Deallocate the memory by creating user defined destructor. */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class student {
  string name;
  int roll;
  int *marks;

public:
  void get(int n) {
    cout << "Enter the name of the student : ";
    cin >> name;
    cout << "Enter the roll number : ";
    cin >> roll;
    cout << "Enter the marks and subject name of 3 subs :" << endl;
    marks = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < 3; i++) {
      cin >> marks[i];
    }
  }
  void show(int n) {
    cout << "Name : " << name << endl;
    cout << "Roll number : " << roll << endl;
    for (int i = 0; i < n; i++) {
      cout << marks[i] << endl;
    }
  }
  // student() { get(); }
  ~student() { cout << "BRUH DESTROYED!!!!" << endl; }
};

int main() {
  student s[2];
  int n[2];
  for (int i = 0; i < 2; i++) {
    cin >> n[i];
    cout << "Enter the number of subjects : ";
    s[i].get(i);
  }
  s[0].show(n[0]);
  s[1].show(n[1]);
  return 0;
}
