// Q2
/*
Write a program to create class “basic” that stores the loan amount in rupees.
Create another class “interest” that stores the number of years and rate of
interest as its private data member. Calculate the simple interest and compound
interest after providing input by using necessary function.
*/
#include <cmath>
#include <iostream>
using namespace std;
class interest;
class basis {
  int lnAmt;

public:
  friend void simpleIR(basis, interest);
  friend void compoundIR(basis, interest);
  basis() {
    cout << "enter the loan Amount" << endl;
    cin >> lnAmt;
  }
};
class interest {
  int yrs;
  float roi;
  int n; // times interest is compounded per year
public:
  friend void simpleIR(basis, interest);
  friend void compoundIR(basis, interest);
  interest() {
    char ans;
    cout << "enter the tenure of the loan" << endl;
    cin >> yrs;
    cout << "enter the rate of interest" << endl;
    cin >> roi;
    cout << "want to Calculate compoundIR ? :" << endl;
    cin >> ans;
    if (ans == 'y') {
      cout << "enter the times interest is to be compounded" << endl;
    }
  }
};

void simpleIR(basis x, interest y) { cout << x.lnAmt * y.roi * y.yrs; }
void compoundIR(basis x, interest y) {
  cout << x.lnAmt * pow((1 + (y.roi / y.yrs)), y.yrs * y.n);
}

int main(int argc, char *argv[]) {
  basis ln1;
  interest ir1;
  char ans;
  cout << "want to Calculate compoundIR ? :" << endl;
  cin >> ans;
  if (ans == 'y') {
    compoundIR(ln1, ir1);
  }
  simpleIR(ln1, ir1);

  return 0;
}
