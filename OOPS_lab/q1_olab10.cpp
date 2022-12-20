// 1.WAP to create a class rupee that stores the amt of ruppes as its private
// data member create another class dollar that stores the respect amt in dollar
// as its private data member input the amt of dollar from keyboard and covert
// to its respective amt in rupees which will be stored in the class rupees and
//  display it. 1.)perform the respective conversion by writing casting operator
//  function and 2) also use the constructor method to perform the operator and
//  display it.(1$=82.6INR)

#include <iostream>
using namespace std;
class rupees;
class dollar {
  int dol;

public:
  dollar() {
    cout << "Enter the amount in dollar : ";
    cin >> dol;
  }
  int reply() { return dol; }
};

class rupees {
  int rup;

public:
  rupees(dollar &d1) { rup = (82.6) * d1.reply(); }
  void print() { cout << "the amount in INR is : " << rup << endl; }
};

int main() {
  dollar d1;
  rupees r1(d1);
  r1.print();

  return 0;
}
