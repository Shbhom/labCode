// WAP to justify the overloading of logical AND using member function and
// bitwise AND using friend function.

#include <iostream>
using namespace std;

class test {
  int a, b, c;

public:
  test() {
    cout << "Enter any two numbers";
    cin >> a >> b;
  }
  void operator&(char a) { c = a & b; }
  friend void operator&(test &g) { g.c = g.a & g.b; }
  void operator&&(char a) { c = a & b; }
  friend void operator&&(test &g, char a) { g.c = g.a && g.b; }
  void disp2() {
    cout << endl;
    cout << a << " && " << b;
    cout << "their bitwise output is" << endl << c;
  }
  void disp1() {
    cout << a << " & " << b;
    cout << "their logical output is" << endl << c;
  }
};

int main() {
  test t1;
  char k = 'h';
  &t1;
  t1.disp1();
  operator&&(t1, k);
  t1.disp2();
  return 0;
}
