//assignment4.cpp
//Matthew Younger
/*
//Question 1
#include<iostream>
using namespace std;
int main(){
  int count = 0;
  int numItems=4;
  while (count < 100) {
    numItems++;
    cout << numItems << endl;     //prints numbers 5 - 104...
    count++;
  }
}
*/
/*
//Question 2
#include<iostream>
#include<string>
using namespace std;
int main(){
  string myString = "what ever you do, do it well!";

  //i initializes with the last character in the string (!)
  //loop prints string in 'reverse order', including spaces
  //but also skipping every other character,
  //because i decreases by 2 each loop.
  for (int i = myString.length() - 1; i > 0; i -=2) {
    cout << myString[i] <<  endl;
  }
}
*/
//Question 3
/*
#include<iostream>
#include<iomanip>
using namespace std;

int
  beverage,
  coffeeCount,
  teaCount,
  cokeCount,
  orangeJCount;
bool runAgain = true;

int main(){
  //welcome prompt
  cout  << "Welcome to the Favorite Beverage Tally!" << '\n'
        << "Simply follow the prompt to tally beverages:" << '\n'
        << "1. Coffee, 2. Tea, 3. Coke, 4. Orange Juice" << "\n\n"
        ;
  int i = 1;    //person counter...
  do {
    cout  << "Please input the favorite beverage of person #" << i << '\n'
          << "Choose 1, 2, 3, or 4 from menu above.  -1 to exit." << '\n'
          ;

    cin >> beverage;
    switch(beverage){
      case 1 :  coffeeCount++;
                break;
      case 2 :  teaCount++;
                break;
      case 3 :  cokeCount++;
                break;
      case 4 :  orangeJCount++;
                break;
      case -1 : runAgain = false;
                break;
      default : cout << "Inalid Choice. Try Again...";
                break;
    }
  } while(runAgain == true);

  //print results
  cout  << "Beverage Number of Votes:" << '\n'
        << "******************************" << '\n'
        << left << setw(15) << "Coffe: " << coffeeCount << '\n'
        << left << setw(15) << "Tea: "  << teaCount << '\n'
        << left << setw(15) << "Coke: " << cokeCount << '\n'
        << left << setw(15) << "Orange Juice: " << orangeJCount << '\n'
        ;
}
*/

//Part 2
/*
#include<iostream>
using namespace std;
int main(){
  const int cityNum = 4;
  int cityPop[cityNum];

  //Welcome
  cout << "Please Enter City Population As Total People Below:" << "\n\n";

  //gather user input - population data
  //input verification - population must be > 0
  bool runAgain = true;
  do {
    for (size_t i = 0; i < cityNum; i++) {
      cout << "City #" << i + 1 << " Population: ";
      cin >> cityPop[i];
    }
    //loop thru all values, if any are negative, error message & re-enter
    for (size_t i = 0; i < cityNum; i++) {
      if (cityPop[i] < 0) {
        cout << "Population can't be negative. Please re-enter" << "\n\n";
        break;
      } else runAgain = false;
    }
  } while(runAgain != false);

  //convert data for graphical representation
  // 1000 people is one * (asterisk)
  for (size_t i = 0; i < cityNum; i++) {
    cityPop[i] /= 1000;
  }

  //print city data - represented graphically (asterisks *)
  //remind user of scale
  cout  << "\n\t\t\t" << "POPULATION:"
        << "\n\t\t\t" << "(each * = 1000 People)" << '\n'
        ;
  for (size_t i = 0; i < cityNum; i++) {
    cout << '\n' << "City #" << i + 1 << " ";
    for (size_t j = 0; j < cityPop[i]; j++) {
      cout << '*';
    }
    cout << '\n';
  }

  //end program
  return 0;
}
*/

//Part II Extra Credit
#include<iostream>
using namespace std;
int main(){
  //const int cityNum = 4;
  int
    * cityPop,    //pointer to future aray?
    size;         //size callout for array

  //Welcome
  cout << "Please Enter Number of Cities & Population As Total People Below:" << "\n\n";

  //gather user data - city size:
  cout << "Number of Cities: ";
  cin >> size;
  //create Array
  cityPop = new int[size];
  //gather user input - population data
  //input verification - population must be > 0
  bool runAgain = true;
  do {
    for (size_t i = 0; i < size; i++) {
      cout << "City #" << i + 1 << " Population: ";
      cin >> cityPop[i];
    }
    //loop thru all values, if any are negative, error message & re-enter
    for (size_t i = 0; i < size; i++) {
      if (cityPop[i] < 0) {
        cout << "Population can't be negative. Please re-enter" << "\n\n";
        break;
      } else runAgain = false;
    }
  } while(runAgain != false);

  //convert data for graphical representation
  // 1000 people is one * (asterisk)
  for (size_t i = 0; i < size; i++) {
    cityPop[i] /= 1000;
  }

  //print city data - represented graphically (asterisks *)
  //remind user of scale
  cout  << "\n\t\t\t" << "POPULATION:"
        << "\n\t\t\t" << "(each * = 1000 People)" << '\n'
        ;
  for (size_t i = 0; i < size; i++) {
    cout << '\n' << "City #" << i + 1 << " ";
    for (size_t j = 0; j < cityPop[i]; j++) {
      cout << '*';
    }
    cout << '\n';
  }

  //end program
  return 0;
}
