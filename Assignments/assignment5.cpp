/*
Matthew Younger
assignment5.cpp
*/

/*
// Part I
#include<iostream>
using namespace std;

void swapValue(int, int);
void swapReference(int &, int &);

int main(){
  int
    i = 10,
    n = 20;

  //call the swapValue Method
  swapValue(i, n);
  //print result of swapValue Method
  cout  << "\n\n"   //1
        << "i = " << i << '\n'
        << "n = " << n << '\n'
        ;

  i = 10, n = 20;
  swapReference(i, n);
  cout  << "\n\n"   //1
        << "i = " << i << '\n'
        << "n = " << n << '\n'
        ;

  return 0;
}


//There's a problem with this first method.  It passes values to the
//method, but fails to ever retrieve them back into main.
//As a result, when 'i' and 'n' are printed, they simply display the original
//values as initialized in main() No changes ultimately happen
//In other words, the values are copied only, and the original is unchanged.

void swapValue(int a, int b){
  int temp = a;

  a = b;
  b = a;
}


//This method passes references into the equation.  This is done with the &.
//As a result, the method is able to modify
//the original variables in main().
//In other words, the values are directly edited, which is shown when
//main() prints the variables that were now changed by calling this Method
void swapReference (int &a, int &b){
  int temp = a;

  a = b;
  b = temp;
}
*/

//part II
#include<iostream>
using namespace std;

//function prototypes
void displayGreeting();
void beginTest(char*);
int gradeTest(char*, const char*);
void printResult(int, const int, bool);
bool grade(int);

int main(){
  const int TEST_SIZE = 10;
  const char correctAnswers[TEST_SIZE] = {
                                  'B','D','A','A','C',
                                  'A','B','A','C','D'};
  char studentAnswers[TEST_SIZE];
  int answersCorrect;
  bool passFail;

  //greeting message
  displayGreeting();

  //begin the test
  beginTest(studentAnswers);

  //call to determine correct answers given...
  answersCorrect = gradeTest(studentAnswers, correctAnswers);

  //determine if student passed, return bool value
  passFail = grade(answersCorrect);

  //print results of the test
  printResult(answersCorrect, TEST_SIZE, passFail);

  //end program
  return 0;
}

void displayGreeting(){
  cout  << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~" << '\n'
        << "Welcome to the Drivers' License Written Exam Testing Software!!" << '\n'
        << "To use this software, simply enter the The Correct Answer:" << '\n'
        << "A, B, C, or D." << '\n'
        << "Your test will then be graded by this software." << '\n'
        << "You must get at least 8 of 10 questions correct to pass." << '\n'
        << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~" << '\n'
        ;
  cout << "\n\n" << "Press Enter to Continue...";
  cin.get();
}
void beginTest(char answers[]){
  int i = 0;
  int maxTries = 3;
  char input;

  while (i < 10) {
    /*determine first if user will exceed maximum number of tries allowed.
    if so, end program immediately.*/
    if (maxTries == 0) {
      cout << "\n\n" << "GOOD BYE!" << "\n\n";
      abort();
    }
    /*gather user input. * check if in acceptable range.*/
    cout << "Enter Choice for Question # " << (i + 1) << '\n';
    cin >> input;
    /*ASCII values for A - D (Uppercase only)*/
    if (toupper(input) < 65 || toupper(input) > 68) {
      /*if not A-D, decrease maxTries, warns user...*/
      cout << "Invalid Input... " << maxTries << '\n';
      --maxTries;
      /*break the loop and attempt again...*/
      continue;
    } else
      /*if input falls within acceptable range, reset maxTries
      and store the acceptable input in corresponding array.
      increment while loop for next spot in array.*/
      maxTries = 3;
      answers[i] = toupper(input);
      ++i;
  }
}
int gradeTest(char answers[], const char key[]){
  int correctCount = 0;
  for (size_t i = 0; i < 10; i++) {
    if (answers[i] == key[i]) {
      ++correctCount;
    } else continue;
  }
  return correctCount;
}
bool grade(int numberCorrect){
  bool result = false;
  if (numberCorrect >= 8) {
    result = true;
  }
  return result;
}
void printResult(int score, const int questions, bool passFail){
  if (passFail == true) {
    cout  << "\n\n"
          << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << '\n'
          << "Congratulations!! You've passed the exam." << '\n'
          << "You Answered: " << score << " Question(s) Correctly," << '\n'
          << "And Answered: " << (questions - score) << " Question(s) Incorrectly." << '\n'
          << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << '\n'
          << "\n\n"
          ;
  }
    else
    cout  << "\n\n"
          << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << '\n'
          << "Sorry. You Have Not Passed The Exam." << '\n'
          << "You Answered: " << score << " Question(s) Correctly." << '\n'
          << "And Answered: " << (questions - score) << " Question(s) Incorrectly." << '\n'
          << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << '\n'
          << "\n\n"
          ;
}
