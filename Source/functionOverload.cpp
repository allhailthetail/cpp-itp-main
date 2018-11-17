/*
This little program demonstrates function overload...
In short, the two identically named functions automatically run only upon
receiving either an integer or a double, and ignore the other.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int square(int);
double square(double);

int main(){
  int userInt;
  double userFloat;
  cout << fixed << showpoint << setprecision(2);
  cout << "Enter an integer and a floating-point value: " << '\n';
  cin >> userInt >> userFloat;

  cout << "Here are their squares:" << "\n\n";
  cout << square(userInt) << " and " << square(userFloat);

  return 0;
}

int square(int number){
  return number * number;
}

double square(double number){
  return number * number;
}
