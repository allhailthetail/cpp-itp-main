#include <iostream>
#include <string>
using namespace std;

int main()
{
  // declare appropriate variables:
  string name, course, title;
  name = "Matthew Younger";
  course = "CSE 100";
  title = "Welcome to C++ Programming";

  // initialize the greeting banner:
  cout << "\t\t***************************" << endl;
  cout << "\t\t" << name << endl;
  cout << "\t\t" << course << endl;
  cout << "\t\t" << title << endl;
  cout << "\t\t***************************" << endl;

  // Add some spacing for visual effect
  cout << "\n\n" << endl;

  // Begin Arithmetic Operations
  cout << "\n\t1. The sum of 2 + 3     " << " \t= " << 2 + 3;
  cout << "\n\t2. The product of 5 * 6 " << " \t= " << 5 * 6;
  cout << "\n\t3. The quotient of 15/7 " << " \t= " << 15 / 7;
  cout << "\n\t4. The remainder of 15/4" << " \t= " << 15 % 4;

  // Closing Remarks
  cout << "\n\n\tThis is the end of my first Program!";
  cout << "\n\t\t\tThankyou!!\n\n";

  //Return an integer 0 to end program
  return 0;
}
