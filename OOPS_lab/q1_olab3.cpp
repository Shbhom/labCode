//WAP in C++ that uses the reference variable concept and demonstrate the function pass by reference method
#include<iostream>
 using namespace std;
 void swap(int &x, int &y)
 {
     int temp;
     temp = x;
     x = y;
     y = temp;
 }
 int main()
 {
     int a, b;
     cout<<"Enter the value of a: ";
     cin>>a;
     cout<<"Enter the value of b: ";
     cin>>b;
     cout<<endl<<"Before swapping: ";
     cout<<"a= "<<a<<" and b= "<<b;
     swap(a, b); 
     cout<<endl<<"After swapping: "; 
     cout<<"a= "<<a<<" and b= "<<b;
 }
