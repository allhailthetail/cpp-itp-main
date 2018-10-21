#include<iostream>
#include<string>
using namespace std;

int main()
{
  string myString, newString;

  //cin >> myString; //enter Welcome to CSE 100
  //cout << "\n\n\n" << myString << endl;

  //processes strings with characters correctly
  getline(cin, newString);
  cout << "\n\n\n" << newString << endl;

  return 0;
}
