//Demonstrates the usefulness of the modulus operator:
#include <iostream>
using namespace std;

int main()
{
  int number = 12345;
  int rightMost = number % 10;

  cout << "The Rightmost Number is:"
  << rightMost << endl;

  return 0;
}
