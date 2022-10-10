// we can intiallize the data members of a class with a intiallization list in a
// constructor function. the intiallization of the data members happens the way
// they are declared in the class irrespective of the intiallization order
#include <iostream>
using namespace std;

class ab {
  int a;
  int b;

public:
  ab() {}
  ab(int x, int y) : b(y), a(x) { // base intiallization, here irrespective
    //: of the sequence in which they are declared and
    //: dependent upon the sequence they are declared in the class
    // a = b;
    // b = y;
  }
  ab(ab &k) : b(k.a), a(k.b) {}
  void show() { cout << a << b << endl; }
  ~ab() { cout << "BRUH MOMENT" << endl; }
};

int main() {
  ab xy(10, 20);
  xy.show();
  ab ty;
  ty = xy; // assigning the values of the properties of the xy obj
  ty.show();
  ab zx(xy);
  zx.show();
  return 0;
}
