//calendar prints for an entire year...
#include<iostream>
using namespace std;

//function calculates day of the week the first of a given month falls on.
int monthStart(int month, int year){
  static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
  const int
    day = 1;  //always first day of month
  int week_day;

  year -= month < 3;
  week_day = ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;

  return week_day;
}

//calculates number of days in a month
int days_in_month(int month){
  //0 january, 11 december, etc
  const int daysinmonth[12] {31,29,31,30,31,30,31,31,30,31,30,31};
  month -= 1; //format month to be indexed
  return daysinmonth[month];
}
