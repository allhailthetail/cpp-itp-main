#include<iostream>  //cout & cin
#include<iomanip>   //setw, align
using namespace std;

/***************************** *
* Determine First Day of Month *
*******************************/
int monthStart(int month, int year){
  const int
    t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 },  //values used in formula
    day = 1;  //always first day of month
  int weekStart;
  year -= month < 3;  //formats for array indexing
  weekStart = ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;

  return weekStart;
}

/****************
* Month Header  *
*****************/
void monthHeader(int month){
  const string
    monthName[12] = {"January","February","March","April","May","June",
                "July","August","September","October","November","December"};

  /* adjust month to be indexed in array */
  month -= 1;

  cout << left << "\n\n" << " *** " << monthName[month] << " *** " << "\n\n";
  cout << left << "\n\n" << " *** " << monthName[month] << " " << year << " *** " << "\n\n";
  cout  << left
        << setw(10) << "SUN"
        << setw(10) << "MON"
        << setw(10) << "TUE"
        << setw(10) << "WED"
        << setw(10) << "THU"
        << setw(10) << "FRI"
        << setw(10) << "SAT"
        << '\n'
        ;
  for (size_t i = 0; i < 7; i++)
    cout << left << setw(10) << "===";

  cout << "\n\n";   //whitespace between month body
}

/********************
* last day of month *
********************/
int monthLastDay(int month){
  //0 january, 11 december, etc
  const int monthLastDay[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
  month -= 1; //format month to be indexed
  return monthLastDay[month];
}

/*******************************
*      BEGIN MAIN PROGRAM      *
********************************/
int main(){
  const int
    LAST_MONTH = 12;    //last month of year, stops printing of calendar
  int
    year,               //user input...
    calColumns = 7,     //number of days in a week
    calRows = 6;

  //gather user input - year
  cout << "Enter Year: ";
  cin >> year;

  //starts at January and loops until LAST_MONTH
  for (size_t month = 1; month < LAST_MONTH; month++) {
    monthHeader(month);
  for (size_t month = 1; month <= LAST_MONTH; month++) {
    int day = monthStart(month,year); //call first day
    int counter = 1;

    for (size_t rows = 0; rows < calRows; rows++) {
      for (size_t col = 0; col < calColumns; col++) {
        if (day >= 1) {
          cout << left << setw(10) << " ";
          --day;
        } else if (day < 1 && counter <= monthLastDay(month)){
          cout << left << setw(10) << counter;
          ++counter;
        } else break;
      }
      cout << "\n\n"; //begin new line for next calendar row
    }
  }
}
