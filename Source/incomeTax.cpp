#include<iostream>
using namespace std;

int main()
{
  double income, tax;
  const double lowRate = 0.33, highRate = 0.38;

  //gather income data from user
  printf("%s\n", "Please enter your income.");
  cin >> income;

  //determine the tax bracket
  //high tax bracket
  if (income < 50000) {
    tax = income * lowRate;
    income -= tax;
    cout << "You are in the " << lowRate * 100 << " Percent tax bracket" << endl;
    cout << "You will pay: $" << tax << " in taxes." << endl;
    cout << "You take home: $" << income << endl;
  }
  //low tax braket
  else {
    tax = income * highRate;
    income -= tax;
    cout << "You are in the " << highRate * 100 << " Percent tax bracket" << endl;
    cout << "You will pay: $" << tax << " in taxes." << endl;
    cout << "You take home: $" << income << endl;
  }

  return 0;
}
