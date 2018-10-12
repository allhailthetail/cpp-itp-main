// Program Calculates a user's pay, given some inputs...
#include <iostream>
using namespace std;

int main()
{
  double hours, rate, pay;

  //get number of hours worked:
  cout << "\nHow many hours worked?  ";
  cin >> rate;
  cout << "How much do you make hourly?  ";
  cin >> hours;
  // Calculate pay:
  pay = hours * rate;

  //output result:
  cout << "\n\tYou earned: " << pay << endl;

  return 0;

}
