/*3.write a program to create a user defined zero argument constructor
 * parametrized and copy constructor and verify that the memory get released in
 * the reverse order of their allocation by using a user defined destructor
 * function.*/

#include <iostream>
using namespace std;

class bruh {
  bruh() { cout << "bruh zero"; }
  bruh(int k) { cout << "bruh parametrized"; }
  bruh(bruh &l) { cout << "bruh copy"; }
};
