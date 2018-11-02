//lab10.cpp
//Matthew Younger
#include<iostream>
#include<cctype>
using namespace std;
int main(){
  string input;
  int charCount = 0,    //tracks number of characters input
      upperCount = 0,   //tracks number of upper characters
      lowerCount = 0,   //tracks number of lower characters
      specialCount = 0, //tracks number of special characters
      digitCount = 0;   //tracks number of digits

do {
  //gather user keyboard input
  cout << "Please type something (quit with '#'):" << '\n';
  getline(cin, input);

  //begin parsing input into characters & numbers
  //main loop parses input
  for (int i = 0; i < input.length(); i++) {
    if (isupper(input[i]))              //uppercase characters
      upperCount++;
      else if (islower(input[i]))       //lowercase characters
        lowerCount++;
        else if (isdigit(input[i]))     //digits
          digitCount++;
          else if (ispunct(input[i]))   //punctuation symbols
          specialCount++;
  }
  //determine total number of characters, excluding spaces
  charCount = upperCount + lowerCount + digitCount;
} while(input != "#");

  //print results:
  cout  << "Total Characters: " << '\t' << charCount << '\n'
        << "Total Uppercase:  " << '\t' << upperCount << '\n'
        << "Total Lowercase:  " << '\t' << lowerCount << '\n'
        << "Total Special:    " << '\t' << specialCount << '\n'
        << "(includes #)"       << '\n'
        << "Total Digits:     " << '\t' << digitCount << '\n'
        ;

  return 0;   //end program
}
