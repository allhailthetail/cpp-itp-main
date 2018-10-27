#include<iostream>
using namespace std;

int main(){
  //define variables
  float grade;
  int intGrade;
  //gather user input:
  printf("%s\n", "Please Input Your Grade to any Precision:");
  cin >> grade;
  //convert grade for switch statement
  grade /= 10;
  intGrade = (int) grade;
  cout << grade << endl;
  cout << intGrade << endl;
  //switch statement:
  switch(intGrade){
    case 9 : printf("%s\n", "Contrats! You got an A!!"); break;
    case 8 : printf("%s\n", "Not bad, You got an B!"); break;
    case 7 : printf("%s\n", "Rats, You got a C!?"); break;
    case 6 : printf("%s\n", "Crap! You got an D!!!!"); break;
    case 5 : printf("%s\n", "Uh, oh!! You got an F!!"); break;
    default : printf("%s\n", "Your Score is too low to be displayed with known characters.");
  }

  return 0;
}
