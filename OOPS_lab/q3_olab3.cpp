//Write  a program in C++ to justify the use of default arguments that computes the
// simple interest with default rate of interest as 8.5%.
#include<iostream>
using namespace std;

double calcInt(double p, double t, double = 8.5);

int main()
{
  double p, t, r, interest;
  char ans;

  cout << "Enter principal amount, time : ";
  cin >> p >> t;
  cout << "do you want to enter rate of interest? : ";
  cin>> ans;
  if(ans == 'y')
  {
    cout << "Enter rate of interest: ";
    cin >> r;
    interest = calcInt(p, t, r);
    cout << "Interest = " << interest << endl;
  } 
  else if(ans == 'n')
  {
    interest = calcInt(p, t);
    cout << "Interest = " << interest << endl;
  }
  else {
    cout << "Invalid input";
  }

  return 0;
}

double calcInt(double p, double t, double r)
{
    return (p*t*r)/100;
}