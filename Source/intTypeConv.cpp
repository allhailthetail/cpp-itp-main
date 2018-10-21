#include <iostream>
using namespace std;

int main()
{
  cout << "This program demonstrates integer division vs double division.\n\n";
  int num1 = 5, num2 = 2, intdiv;
  double dnum1 = 5.0, doublediv;

  intdiv = num1/num2; //int division
  doublediv = dnum1/num2; //floating point division

  cout << "Integer Division: " << intdiv << "\n" << "Double Division: " <<
  doublediv << endl;

  return 0;
}
