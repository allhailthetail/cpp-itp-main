/*
//question 2 exercise 1
//this program prints "you pass" if a student's average is
//60 or higher and prints "you fail" otherwise
//Matthew Younger
#include<iostream>
using namespace std;
int main(){
  float average; //holds the grade average

  //gather user input
  cout << "input your average: ";
  cin >> average;

  //if statement determines if you pass
  //if (average > 60) discontinuity when 60 is input.
  //program does not perform as expected
  //fixed
  if (average >= 60)
    cout << "You Pass" << endl;

  //if statement determines if you fail
  if (average < 60)
    cout << "You Fail" << endl;

  return 0;
}
*/

/*
//question 2 exercise 2
//this program prints "you pass" if a student's average is
//60 or higher and prints "you fail" otherwise
//Matthew Younger
#include<iostream>
using namespace std;
int main(){
  float average; //holds the grade average

  //gather user input
  cout << "input your average: ";
  cin >> average;

  //if statement determines if you pass
  //modified to use only one if statement and an else condition
  if (average >= 60)
    cout << "You Pass" << endl;
    else cout << "You Fail" <<endl;

  return 0;
}
*/

//question 2 exercise 3
//this program prints "you pass" if a student's average is
//60 or higher and prints "you fail" otherwise
//Matthew Younger
#include<iostream>
using namespace std;
int main(){
  float average; //holds the grade average

  //gather user input
  cout << "input your average: ";
  cin >> average;

  //if statement determines if you pass
  //modified to use only one if statement and an else conditions
  //for the rest
  //note that it cannot account for negative input
  //out of range
  if (average > 100) {
    cout << "Invalid data (data above 100)" << endl;}
    else if (average >= 90) {
      cout << "You got an A!!" << endl;}
      else if (average >= 80) {
        cout << "No sweat, you got a B." << endl;}
        else if (average >= 60) {
          cout << "You Pass" << endl;}
          else if (average >= 0) {
            cout << "You Fail." << endl;}

  return 0;
}
