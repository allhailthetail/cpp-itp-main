#include <iostream>
using namespace std;

int main ()
{
  // Price per hour this guy makes
  // float wage = 7.5, paycheck; -- How I think we should do it...
  // Number of hours he works
  // char hours = 10; -- How I think we should do it...
  /* I am wrong for trying to do it this way, because caracter is specifically
      used for storing ASCII value ecoded characters...  My example works,
      but like shit...
  */

  // How instructor does it:
  int hours = 10;
  double payRate = 7.5, wage;

  // Perform arithmetic operation
  wage = hours * payRate;

  // Print the result
  cout << "The Total Wage: " << wage << "\n\n";

  return 0;
}
