/*
lab14.cpp
Matthew Younger
*/

#include <iostream>
#include<iomanip>
using namespace std;
// ***declare the function prototype for "calcFinalScore" here
double calcFinalScore(double,double,double);
// ***declare the function prototype for "printFinalScore" here
char printFinalScore(double);
int main(){
// local variables
double test1, test2; // the two tests scores
double hw; // the homework score
double finalScore; // the student's final score
cout << "Enter the score for test #1: ";
cin >> test1;
cout << "Enter the score for test #2: ";
cin >> test2;
cout << "Enter the score for the homework: ";
cin >> hw;
finalScore = calcFinalScore(test1,test2,hw);
cout  << "The student's final score is: "
      << fixed << setprecision(1) << finalScore << '%'  //final score numeric
      << '\n'
      << "Their final letter grade is: "
      << printFinalScore(finalScore) //final score letter equivalent
      <<"\n\n"
      ;
return 0;
}
// ***implement calcFinalScore here
double calcFinalScore(double test1, double test2, double hw){
  double finalScore;
  finalScore = 0.4 * (test1 + test2) + 0.2 * hw;
  return finalScore;
}
// ***implement printFinalScore here
char printFinalScore(double finalScore){
  char letterGrade;
  if (finalScore >= 90){
    letterGrade = 'A';
  } else if (finalScore >= 80) {
    letterGrade = 'B';
  } else if (finalScore >= 70) {
    letterGrade = 'C';
  } else if (finalScore >= 60) {
    letterGrade = 'D';
  } else
    letterGrade = 'F';
  //return the result of function
  return letterGrade;
}
