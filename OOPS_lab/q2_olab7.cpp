// 2.wap to create a class library that stores the details  a book like name,
// name of the author and no of pages and derive the class publisher that stores
// the name of the publisher and year of publication by using necessary function
// input and display the details by justifing runtime binding deallocate all the
// necessary memory after the deatils are displayed

#include <cstring>
#include <iostream>
using namespace std;

class library {
protected:
  string bName;
  string aName;
  int nPages;

public:
  void in1() {
    cin >> bName;
    cin >> aName;
    cin >> nPages;
  }
};

class publisher : public library {
  string nPub;
  int yr;

public:
  void in2() {
    cin >> nPub;
    cin >> yr;
  }
  void disp() {
    cout << bName << endl;
    cout << aName << endl;
    cout << nPages << endl;
    cout << nPub << endl;
    cout << yr << endl;
  }
  publisher() {
    in1();
    in2();
    disp();
  }
};

int main() {
  publisher p1;

  return 0;
}
