// Write a program in C++ to create overloaded function interest to compute simple interest
// and compound interest.

#include<iostream>
using namespace std;

double calcInt(double p, double t, double r);
double calcInt(double p, double t, double r, double n);

int main()
{
    double p, t, r, interest;
    int n;
    char ans;
    cout << "Enter principal amount, time and rate : ";
    cin >> p >> t>>r;
    cout << "Do you want to calculate compound interest: ";
    cin >> ans;
    if(ans == 'y')
    {
        cout << "Enter number of times interest is compounded: ";
        cin >> n;
        interest = calcInt(p, t, r, n);
        cout << "Interest = " << interest << endl;
    } 
    else if(ans == 'n')
    {
        interest = calcInt(p, t, r);
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
double calcInt(double p, double t, double r, double n)
{
    return (p*t*r*n)/100;
}