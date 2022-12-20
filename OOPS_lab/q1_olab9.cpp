// 1.a)wap to create a class employee that stores the grade(A or B or C) and
// monthly salary of an employee overload the unary increament and decreament
// operator using member and friend function respectively where the pre form of
// unary operator is applied 1.b)In the above example perform the post
// decreament using friend function and pre increament using member function and
// display the values

#include <iostream>
#include <string.h>
using namespace std;
class employee {
private:
  char grade;
  int monthlysalary;

public:
  void setgrade(char grade) { this->grade = grade; }
  void gergrade() { cout << this->grade; }
  void getmonthlysalary() { cout << this->monthlysalary << endl; }
  void operator++() {
    if (grade == 'A') {
      this->monthlysalary = 50000;
      ++this->monthlysalary;
      cout << "the new monthly salary is : " << this->monthlysalary << endl;
    }
    if (grade == 'B') {
      this->monthlysalary = 25000;
      ++this->monthlysalary;
      cout << "the new monthly salary is : " << this->monthlysalary << endl;
    }
    if (grade == 'C') {
      this->monthlysalary = 15000;
      ++this->monthlysalary;
      cout << "the new monthly salary is : " << this->monthlysalary << endl;
    }
  }
  void operator--() {

    cout << "the old salary was : " << --this->monthlysalary << endl;
  }
  friend void operator--(employee &e1, int) {
    cout << "salary after decrement is : " << --e1.monthlysalary << endl;
  }
};
int main() {
  employee e1;
  e1.setgrade('C');
  e1.operator++();
  e1.getmonthlysalary();
  e1.operator--();
  operator--(e1, 5);

  return 0;
}
