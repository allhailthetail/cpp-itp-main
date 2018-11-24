/*
Matthew Younger
lab16.cpp
*/



//Part A

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double getRadius();
double findArea(double);
double findCircumference(double);

int main(){
  double
    radius,
    area,
    circumference;

  //get the value of radius from the user
  radius = getRadius();

  //determine the area and circumference
  area = findArea(radius);
  circumference = findCircumference(radius);

  //output the results
  cout  << "A circle of radius: " << radius
        << fixed << setprecision(4)
        << " Has an area of: " << area << '\n'
        << " and a circumference of: " << circumference << '\n'
        ;

  return 0;

}

double getRadius(){
  double radius;
  cout << "Enter the Radius of the Circle: ";
  cin >> radius;

  return radius;
}

double findArea(double radius){
  const double
    pi = 3.141592654;
  double area;

  area = pi * pow(radius, 2);

  return area;
}

double findCircumference(double radius){
  const double
    pi = 3.141592654;
  double circumference;

  circumference = 2 * pi * radius;

  return circumference;
}



/*
Part B:

// This program takes two numbers (payRate & hours) // and multiplies them to get grosspay.
// It then calculates net pay by subtracting 15%
#include <iostream>
#include <iomanip>
using namespace std;
//Function prototypes
void printDescription();
void printPay(double&, double&);
void computePaycheck(double, int, double&, double&);

int main(){
double payRate;
double grossPay;
double netPay;
int hours;

cout << setprecision(2) << fixed;
cout << "Welcome to the Pay Roll Program" << '\n';

//prints the description of the program
printDescription();

cout << "Please input the pay per whole hour" << '\n';
cin >> payRate;
cout << "Please input the number of whole hours worked" << '\n';
cin >> hours;

//computes the values to return for gross & net pay
computePaycheck(payRate, hours, grossPay, netPay);

//prints the results:
printPay(grossPay, netPay);

return 0;
}

void printDescription(){
cout  << "\n\n"
      << "************************************************" << '\n'
      << "This program takes two numbers (payRate & hours)" << '\n'
      << "and multiplies them to get gross pay " << '\n'
      << "it then calculates net pay by subtracting 15%" << '\n'
      << "************************************************" << "\n\n"
      ;
}

// *********************************************************************
// computePaycheck //
// task: This function takes rate and time and multiples them to
// get gross pay and then finds net pay by subtracting 15%.
// data in: pay rate and time in hours worked
// data out: the gross and net pay //
// ********************************************************************
void computePaycheck(double rate, int time, double &grossPay, double &netPay){
  grossPay = rate * time;
  netPay = grossPay * (1.0 - .15);
}

void printPay(double &grossPay, double &netPay){
  cout  << "\n\n"
        << "The Gross Pay Was: $" << grossPay
        << '\n'
        << "  The Net Pay Was: $"   << netPay
        << "\n\n"
        ;
}

*/
