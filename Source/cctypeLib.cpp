#include <iostream>
#include <cctype>
using namespace std;

// demonstrates the usefulness of the cctype library for character operations.
int main()
{
  char myCharacter;
  cin >> myCharacter;

  cout << "\n\n" << static_cast<char> (toupper (myCharacter)) << endl;

  return 0;
}
