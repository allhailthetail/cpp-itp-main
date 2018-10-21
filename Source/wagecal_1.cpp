#include <iostream>
using namespace std;

// example illustrating the lack of hardcoding limitations
int main()
{
  int hoursWorked;
  double wage, hourlyPay;

  cout << "\n\nEnter Hours worked and Hourly rate: " << endl;
  cin >> hoursWorked;
  cin >> hourlyPay;

  wage = hoursWorked * hourlyPay;

  cout << "\n\nThe Employee's pay was: $" << wage << "\n\n";

  return 0;
}
