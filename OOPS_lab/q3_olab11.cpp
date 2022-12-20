// 3.wap to find the number of characters present (lenght), number of words, and
// no of sentences present in the file

#include <fstream>
#include <iostream>
using namespace std;
int main() {
  ifstream fin("fname.txt");
  int word = 0;
  int space = 0;
  int lines = 0;
  int charc = 0;
  char ch;

  fin.seekg(0, ios::beg);

  while (fin) {
    fin.get(ch);
    charc++;
    if (ch == '\n')
      word++;
    else if (ch == ' ')
      space++;
    else if (ch == '.')
      lines++;
  }

  cout << "\ncharacters=" << charc << endl;
  cout << "\nWords=" << word;
  cout << "\nspaces=" << space << endl;
  cout << "\nlines=" << lines << endl;
  fin.close(); // closing file

  return 0;
}
