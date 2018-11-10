#include<iostream>
#include<iomanip>   //setw()
using namespace std;

int main(){
  const int
    colWidth = 6,       //defines how wide/tall each column will be.
    daysWeek = 7,
    calColumns = 5;

  int columnCount = 0;
  do {
    //prints leading row separator
    for (size_t i = 0; i < (2 * colWidth * daysWeek + 2); i++) {
      cout << right << "=";
    } cout << '\n';

    for (size_t i = 0; i < colWidth; i++) {     //prints calendar borders
      cout << "|";    //left-leading separator
      for (size_t i = 0; i < daysWeek; i++) {   //prints inner column separators
        cout << left << setw(colWidth) << "|";
        cout << right << setw(colWidth) << "|";
      }
    cout << "|";    //right-leading separator
    cout << '\n';
    }
    ++columnCount;
  } while(columnCount < calColumns);

  //prints bottom-most row separator
  for (size_t i = 0; i < (2 * colWidth * daysWeek + 2); i++) {
    cout << right << "=";
  } cout << '\n';
}
