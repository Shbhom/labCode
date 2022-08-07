#include <iostream>
using namespace std;

int main() {
  int n;
  std::cout << "enter the value of n" << std::endl;
  cin >> n;
  int *a;
  a = (int *)malloc(n * sizeof(n));
  int sum = 0;
  float avg;
  for (int i = 0; i < n; i++) {
    std::cout << "\nenter number" << std::endl;
    cin >> *(a + i);
    sum += *(a + i);
  }
  cout << "Sum : " << sum << endl;
  avg = sum * 1.0 / n;
  cout << "Avg : " << avg << endl;

  return 0;
}
