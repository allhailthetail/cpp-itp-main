#include<iostream>
#include<string>
using namespace std;

int main()
{
  string firstName, lastName, passwd;

  cout << "Please type your first name: " << endl;
  getline(cin, firstName);
  cout << "Please type your last name: " << endl;
  getline(cin, lastName);

  passwd = firstName.substr(0,3) + lastName.substr(0,1);

  cout << "Your Temporary Password Is:" << endl
  << passwd << endl;

  return 0;
}
