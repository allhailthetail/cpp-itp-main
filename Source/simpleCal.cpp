/*
simplecal.cpp
Matthew Younger

This simple calendar is configured exclusively for the month of
November 2018, but is designed to be highly extensible with
a few more additions.
*/

#include<iostream>
using namespace std;

int main(){

//create the header for the calendar:
  printf("%s\n","\nNovember 2018:");
  printf("%s\n","Sun\tMon\tTue\tWed\tThu\tFri\tSat");
  printf("%s\n","===\t===\t===\t===\t===\t===\t===");

  //array to store the dates
  int days[] = {
    28,29,30,31,1,2,3,
    4,5,6,7,8,9,10,
    11,12,13,14,15,16,17,
    18,19,20,21,22,23,24,
    25,26,27,28,29,30,1

  };

  //simple variables to control the loops
  int i = 0, j = 0, k = 0;
  //nested loops print the dates...
  while (i < 5){
    while (j < 7) {
      printf("%d\t",days[k]);
      j ++;
      k ++;
    }
  cout << "\n";
  i ++;
  j = 0;

  }

  //end the main program
  return 0;
}
