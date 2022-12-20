#include <fstream>
#include <iostream>
using namespace std;

// function to perform the task
// accepts the parameter str as the text to
// be stored in text file
void reverse(char str[]) {
  char ch;
  ofstream ofs;

  ofs.open("Geeks.txt", ios::out);

  for (int i = 0; str[i] != '\0'; i++) {
    ofs.put(str[i]);
  }

  int pos = ofs.tellp();
  ofs.close();

  ifstream ifs;
  ifs.open("Geeks.txt", ios::in);

  ofstream ofs1;
  ofs1.open("Geeks2.txt", ios::out);

  ifs.seekg(--pos);

  while (pos >= 0) {
    ifs.get(ch);

    ofs1.put(ch);

    pos--;

    ifs.seekg(pos);
  }

  ifs.close();
  ofs1.close();

  ifstream ifs1;
  ifs1.open("Geeks2.txt", ios::in);

  // file.eof() checks the end of the text file
  while (!ifs1.eof()) {
    ifs1.get(ch);
    cout << ch;
  }
  ifs1.close();
}

int main() {
  cout << "example 1: (Geeks For Geeks) \n";

  reverse("Geeks For Geeks");

  cout << "\n example 2:(reverse)\n";
  reverse("reverse");

  getch();
  return 0;
}
