// 2.wap to create the contents of the file and print to the pointer and also
// write to another file
#include <fstream>
#include <ios>
#include <iostream>
#include <string>
using namespace std;

int main() {
  fstream file1;
  fstream file2;
  string line;
  file1.open("bruh1.txt", ios::in | ios::out | ios::app);
  file2.open("bruh2.txt", ios::in | ios::out | ios::app);
  if (!file1.is_open() || !file2.is_open()) {
    cout << "Nahi khul rahi Cry emoji" << endl;
  } else {
    cout << "Zamn khul gayi" << endl;
    char ans;
    cout << "Do you wanna read the file or write to the other file (r/w): ";
    cin >> ans;
    if (ans == 'r') {
      while (file1.good()) {
        getline(file1, line);
        cout << line << endl;
      }
    } else if (ans == 'w') {
      getline(file1, line);
      cout << line << endl;
      file2 << line;
    }
  }
  file1.close();

  return 0;
}
