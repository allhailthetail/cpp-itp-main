#include<iostream>
using namespace std;

int monthStart(int month, int year){
  //fills an array with days of the week...

  //determines day of the week the 1st is on:
  static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
  const int
    day = 1;  //always first day of month
  int week_day;

  year -= month < 3;
  week_day = ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;

  return week_day;
}

int main(){
  cout << monthStart(2,2018) << endl;;
}
