/*
Matthew Younger
lab16.cpp
*/

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
        << " Has an area of: " << area << '\n'
        << fixed << setprecision(4)
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
