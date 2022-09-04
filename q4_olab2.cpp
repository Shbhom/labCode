#include <iostream>
using namespace std;

class student {
  char name[20];
  int roll;
  int age;
  char branch[10];
  int section_num;
  int marks[5];
  float avg_marks;

public:
  void get() {
    cout << "\nEnter the name of the student : ";
    cin >> name;
    cout << "\nEnter the roll of the student : ";
    cin >> roll;
    cout << "\nEnter the age of the student : ";
    cin >> age;
    cout << "\nEnter the branch of the student : ";
    cin >> branch;
    cout << "\nEnter the section_num of the student : " << endl;
    cin >> section_num;

    int sum = 0;
    cout << "Enter three marks of the student: ";
    for (int i = 0; i < 5; i++) {
      cin >> marks[i];
      sum += marks[i];
    }
    avg_marks = sum / 5.0;
  }
  void show() {
    cout << "\nName of the student is : " << name << endl;
    cout << "Roll no of the student is : " << roll << endl;
    cout << "age of the student is : " << age << " Yrs" << endl;
    cout << "Section of the student is : " << branch << " " << section_num
         << endl;
    cout << "Marks secured by the student are : ";
    for (int i = 0; i < 5; i++) {
      cout << marks[i] << " ";
    }
    cout << "\nAverage marks is : " << avg_marks;
  }
};

int main() {
  student s1;
  s1.get();
  s1.show();
  return 0;
}
