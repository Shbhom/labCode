// wap to read from a file in reverse order and print to file

#include <cstdio>
#include <fstream>
#include <ios>
#include <iostream>
using namespace std;

void reverse(char str[]) {
  char ch;
  ofstream out1("input.txt");
  for (int i = 0; str[i] != '\0'; i++) {
    out1.put(str[i]);
  }
  int pos = out1.tellp();
  out1.close();
  ifstream in("output.txt", ios::in);
  ofstream out2("input.txt", ios::out);
  in.seekg(--pos);
  while (pos >= 0) {
    // reading from the file 1
    in.get(ch);

    // writing to the file 2
    out2.put(ch);

    /* shifting read pointer position one
    alphabet backwards in the text file */
    pos--;

    in.seekg(pos);
  }

  in.close();
  out2.close();

  ifstream ifs1;
  ifs1.open("Geeks2.txt", ios::in);

  // file.eof() checks the end of the text file
  while (!ifs1.eof()) {
    in.get(ch);
    cout << ch;
  }
  in.close();
}

int main() {

  cout << "example 1: (Geeks For Geeks) \n";

  reverse("Geeks For Geeks");

  cout << "\n example 2:(reverse)\n";
  reverse("reverse");

  getch();
  return 0;
}
