// WAP to create a class student having name , age ,roll ,avg marks as it member
// input the details from keyboard and display the details to monitor by
// overloading the extraction and insertion operator .
#include <iostream>
using namespace std;
class student {
  char name[10];
  int age;
  int roll;
  int avg_marks;

public:
  friend istream &operator>>(istream &k, student &l) {
    k >> l.name;
    k >> l.age;
    k >> l.roll;
    k >> l.avg_marks;
    return k;
  }
  friend ostream &operator<<(ostream &m, student &l) {
    m << l.name << endl;
    m << l.age << endl;
    m << l.roll << endl;
    m << l.avg_marks;
    return m;
  }
};
int main() {
  student s1;
  cin >> s1;
  cout << s1;
  return 0;
}
