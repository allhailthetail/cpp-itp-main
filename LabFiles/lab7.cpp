#include<iostream>
#include<cmath>
using namespace std;

int main(){
  //define dimensional variables & selection variable:
  int selection;
  double dim_1, dim_2;

  //welcome prompt
  cout << "-------------------------------\n";
  cout << "Welcome to the Area Calculator!\n";
  cout << "Please select a basic shape....\n";
  cout << "1. Square\n";
  cout << "2. Circle\n";
  cout << "3. Right Triangle\n";
  cout << "4. Quit\n";
  cout << "-------------------------------\n";

  //gather user input:
  cout << "\n\nShape? ";
  cin >> selection;

  switch (selection) {
    case 1 :
      cout << "Square:\n";
      cout << "Dimension 1: ";
      cin >> dim_1;
      cout << "Dimension 2: ";
      cin >> dim_2;
      cout << "\n\nYour Square is:\n";
      //area of square is base * height
      cout << dim_1 * dim_2 << " Square Units.\n\n";
      break;
    case 2 :
      cout << "Circle:\n";
      cout << "Radius: ";
      cin >> dim_1;
      cout << "\n\nYour circle is:\n";
      //area of circle is pi * radius ^ 2
      cout << 3.14 * pow(dim_1, 2) << " Square Units.\n\n";
      break;
    case 3 :
      cout << "Right Triangle:\n";
      cout << "Leg 1: ";
      cin >> dim_1;
      cout << "Leg 2: ";
      cin >> dim_2;
      cout << "\n\nYour triangle is:\n";
      //area of triangle is 1/2 * base * height
      cout << 0.5 * dim_1 * dim_2 << " Square Units.\n\n";
      break;
    default :
      cout << "Sorry, that is not an opion.  Please restart program.\n\n";
      break;
    }

  return 0;
}
