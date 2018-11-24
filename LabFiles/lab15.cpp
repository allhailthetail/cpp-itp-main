/*
lab15.cpp
Matthew Younger
*/

#include <iostream>
#include<iomanip>
using namespace std;

void readTestandHwScore(double&, double&, double&);
double calcGrade(double, double, double);
char getLetterScore(double);

int main(){
  double
    finalGrade,
    test1Score = 0.0,   //initialize everyting as zero
    test2Score = 0.0,   //so that they can be used in void()
    hwScore = 0.0;
  char letterGrade;

  /*call to void function readTestandHwScore, read & record scores ONLY.
  results are returned to original variables in main() */
  readTestandHwScore(test1Score, test2Score, hwScore);

  /*pass newly-modified variables to equation that calculates
  numerical grade, calcGrade()*/
  finalGrade = calcGrade(test1Score, test2Score, hwScore);

  /*pass newly-generated final grade to generator which determines
  the appropriate letter grade*/
  letterGrade = getLetterScore(finalGrade);

  /*print the results...*/
  cout  << "\n\n"
        << "The student's final score is: "
        << fixed << setprecision(1) << finalGrade << '%'  //final score numeric
        << '\n'
        << "Their final letter grade is: "
        << letterGrade //final score letter equivalent
        << "\n\n"
        ;

  return 0;

}

void readTestandHwScore(double &test1Score, double &test2Score, double &hwScore){
  cout << "Enter Score for Test #1: " << '\n';
  cin >> test1Score;
  cout << "Ener Score for Test #2: " << '\n';
  cin >> test2Score;
  cout << "Enter Score for Homework: " << '\n';
  cin >> hwScore;
}

double calcGrade(double test1, double test2, double hw){
  double finalGrade;

  //equation for final grade
  finalGrade = 0.4 * (test1 + test2) + 0.2 * hw;

  return finalGrade;
}

/*generates letter grade equivalent to numerical value*/
char getLetterScore(double score){
  char letterGrade;

  if (score >= 90){
    letterGrade = 'A';
  } else if (score >= 80) {
    letterGrade = 'B';
  } else if (score >= 70) {
    letterGrade = 'C';
  } else if (score >= 60) {
    letterGrade = 'D';
  } else
    letterGrade = 'F';
  //return the result of function

  return letterGrade;
}
