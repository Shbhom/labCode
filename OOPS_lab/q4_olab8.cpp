// WAP to create a class test that stores the number of units of an item and
// price of each in it in rupees.Input the details for two units,overload
// the greater operator which compares between the total price of the
// two instances and returns the property of that instance which is having
// higher total value otherwise simply displays equal when the total value is
// found to be same.

#include <iostream>
#include <string>
using namespace std;

class test {
  string name;
  int price;

public:
  test() {
    cout << "Enter the name of the item : ";
    cin >> name;
    cout << "Enter the price of the item : ";
    cin >> price;
  }
  int operator<=(test k) {
    if (price << k.price) {
      cout << "price of the second item is greater";
      return k.price;
    } else if (price == k.price) {
      cout << "both item is of same price";
      return 8;
    } else {
      cout << "price of first item is greater";
      return price;
    }
  }
};

int main() {
  test t1, t2;
  int price = t1 <= t2;
  cout << endl << price << endl;
  return 0;
}
