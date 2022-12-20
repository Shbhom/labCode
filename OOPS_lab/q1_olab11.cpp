#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ofstream in;
  in.open("student.txt");
  if (!in.is_open()) {
    cout << "Error while opening file";
  } else {
    cout << "bruh khul gayi" << endl;
    int ans;
    do {
      cout << "wanna add more names (1/0) : ";
      cin >> ans;
      if (ans == 0) {
        break;
      }
      string name;
      cout << "Enter the name of the student : ";
      cin >> name;
      in << name << endl;
    } while (ans);
  }

  return 0;
}
