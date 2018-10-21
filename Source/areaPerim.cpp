#include<iostream>
#include<string>
using namespace std;

int main()
{
  double sideOne, sideTwo, area, perimeter;

  cout << "Length of Side #1: " << endl;
  cin >> sideOne;
  cout << "Please type your last name: " << endl;
  cin >> sideTwo;

  area = sideOne * sideTwo;
  perimeter = 2 * (sideOne + sideTwo);

  cout << "For a square measuring: " << sideOne << " Units X " <<
  sideTwo << " Units:" << endl;

  cout << "the area of the square is: " << area << " square units"<< endl;
  cout << "the perimeter of the square is: " << perimeter << " units" << endl;


  return 0;
}
