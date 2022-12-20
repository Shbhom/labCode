// wap to create a template class that accepts the details of two students
// and display them on the monitor
#include <iostream>
using namespace std;
template <class T, class v> class student {
  T name;
  v age;

public:
  student() { input(); }
  student(T name, T age) { input(name, age); }
  void input() {
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
  }
  void output() {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
  }
};

int main() {
  student<string, int> stringObj;
  student<char, double> charObj;
  stringObj.output();
  charObj.output();
  return 0;
}
