//  2. WAP to create a class that stores the length unit in feet and inches
//  input the total length in inches at the time of creation of the obj
//  1)assign the length value for a respective obj to system defined that stores
//  the length in feet and display the output
//  2) assign the total length unit  that is stores in a system define variable
//  to the obj by using neccessary member function and display the length in
//  feet and inches HINT: add constructor and deconstructor

#include <cstdio>
#include <iostream>
#include <ostream>
using namespace std;

class length {
  int lenIn;
  int lenFeet;

public:
  length() {
    cout << "Enter the length in inches : ";
    cin >> lenIn;
    lenFeet = 0;
  }
  void convINF() { lenFeet = lenIn * 12; }
  operator int() { return lenFeet; }
  void print() { cout << "total length = " << lenFeet << endl; }
  ~length() { cout << endl << "obj deconstructed"; }
};

int main() {
  length l1;
  l1.convINF();
  int feet = l1;
  l1.print();
  cout << feet;
  return 0;
}
