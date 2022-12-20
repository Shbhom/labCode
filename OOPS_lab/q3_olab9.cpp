#include <iostream>
using namespace std;

class student {
private:
  int mark;
  int roll;

public:
  student() {
    mark = 0;
    roll = 0;
  }
  student(int n, int r) {
    mark = n;
    roll = r;
  }
  void operator=(student &l) {
    mark = l.mark;
    roll = l.roll;
  }
  student(student &l) {
    mark = l.mark;
    roll = l.roll;
  }
  void displayDetails() {
    cout << "mark: " << mark << endl << " roll:" << roll << endl;
  }
  ~student() { cout << "Destroy" << endl; }
};

int main() {
  student s1(20, 10), s2;
  student s3 = s1;

  s2.operator=(s1);
  cout << "after assign :";
  s2.displayDetails();
  s3.displayDetails();
  return 0;
}
