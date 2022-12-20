// WAP to create a class test having the marks of a student overload the unary -
// using member function and friend function to justify the overloading of
// theunary -operator.

#include <iostream>
#include <iterator>
using namespace std;

class test {
  int marks[3];

public:
  test() {
    cout << "Enter the marks of 3 subs" << endl;
    for (int i = 0; i < 3; i++) {
      cin >> marks[i];
    }
  }
  void operator-(char a) {
    for (int i = 0; i < 3; i++) {
      marks[i] = -marks[i];
    }
  }
  friend void operator-(test &j) {
    for (int i = 0; i < 3; i++) {
      j.marks[i] = -j.marks[i];
    }
  }
  void disp() {
    for (int i = 0; i < 3; i++) {
      cout << marks[i] << endl;
    }
  }
};

int main() {
  test t1;
  -t1;
  // operator-(t1);
  t1.disp();
  return 0;
}
