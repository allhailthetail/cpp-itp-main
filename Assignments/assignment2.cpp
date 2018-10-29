//assignment2.cpp
//Matthew Younger

/*
//question 1
#include<iostream>
using namespace std;

int main(){
  const double BASE_TEMP = 331.3, SPEED_CONST = 0.61;
  double temperature, soundSpeed;

  //gather user input
  cout << "----------------------------------------------\n";
  cout << "Welcome to the Temperature Conversion Program!\n";
  cout << "To use this calculator, simply enter the \n";
  cout << "temperature in deg C.";
  cout << "----------------------------------------------\n\n";
  cout << "\tTemperature: ";
  cin >> temperature;

  //perform calculation
  soundSpeed = SPEED_CONST * temperature + BASE_TEMP;

  //output the result
  cout << "\nThe speed of sound in dry air at " << temperature << " deg C is: "
  << soundSpeed << " m/s\n\n";

  return 0;
}
*/

/*
//question 2
3 + 4 - 5 = 2
4 + 4 * 3 / 6 = 6
6 + 12 * 2 - 8 = 22
6 + 12 * (2 - 8) = -66
(19 - 3) * (2 + 2) / 4 = 16
*/

/*
//question 3
#include<iostream>
#include<string>
using namespace std;

int main(){
  string myString1, myString2;
  char myChar1, myChar2;

  cout << "Enter a String:";
  cin >> myString1;
  cin.get(myChar1);
  cin >> myChar2;
  getline(cin, myString2);

  //entering "This is my first C++ Program:"
  //myString1 stores "This"
  //myChar1 is blank
  //myChar2 stores "i"
  //myString2 stores "s my first C++ Program"
  cout << "\n" << myString1 << "\n" << myChar1 << "\n" << myChar2 << "\n"
  << myString2 << endl;

  return 0;
}
*/


//part 2
//question 4
//MadLib Program
#include<iostream>
#include<string>
using namespace std;

int main(){
  string profName, userName, food, adjective, color, animal;
  int number = 0;

  //professor's name
  cout << "\nProfessor's Name: ";
  cin >> profName;
  //user's name
  cout << "\nYour name: ";
  cin >> userName;
  //a food
  cout << "\nA food: ";
  cin >> food;
  //an adjective
  cout << "\nAn Adjective: ";
  cin >> adjective;
  //a color
  cout << "\nA Color: ";
  cin >> color;
  //an animal
  cout << "\nAn Animal: ";
  cin >> animal;
  // a number between 100 and 120
  while (number < 100 || number > 120) {
    cout << "\nPlease Enter a number between 100 and 120: ";
    cin >> number;}

  //Print MadLib
  cout  << "\n\tDear Instructor " << profName << ",\n\n"
        << "I am sorry that I am unable to turn in my homework at this time.\n"
        << "First, I ate rotten " << food << ",\n"
        << "Which made me turn " << color << " and extremely ill.\n"
        << "I came down with a fever of " << number << ".\n"
        << "Next, my " << adjective << " " << animal << " must have smelled\n"
        << "the remains of the " << food << " on my homework, because he ate it.\n"
        << "I am currently rewriting my homework and hope you will accept"
        << "it here."
        << "\n\n\tSincerely,\n" << "\t" << userName
        << "\n\n"
        ;

  return 0;
  }
