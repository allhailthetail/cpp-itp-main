//this program demostrates the first uses of the switch-case statement
#include<iostream>
using namespace std;

int main()
{
  int day;
  cin >> day;
  switch(day){
    case 1 : cout << "Today is \n"; break;
    case 2 : cout << "Today is Monday\n"; break;
    case 3 : cout << "Today is Tuesday\n"; break;
    case 4 : cout << "Today is Wednesday\n"; break;
    case 5 : cout << "Today is Thursday\n"; break;
    case 6 : cout << "Today is Friday\n"; break;
    case 7 : cout << "Today is Saturday\n"; break;
    default: cout << "Not a day...\n"; break;
  }

  return 0;
}
