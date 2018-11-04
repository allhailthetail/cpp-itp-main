#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  //global constants...
  const double            //constants for business rates:
    B_BASE = 99.99,
    B_STAGE1 = 0.45,
    B_STAGE1_OFFSET = 170.01, B_STAGE1_LIMIT = 144.99,
    B_STAGE2 = 0.99,
    B_STAGE2_OFFSET = 548.01;
  const double            //constants for regular consumer rates
    R_BASE = 29.99,
    R_STAGE1 = .55,
    R_STAGE1_OFFSET = 80.01, R_STAGE1_LIMIT = 167.49,
    R_STAGE2 = .88,
    R_STAGE2_OFFSET = 228.5;
  bool runAgain = 0;


//begin pogram-loop structure
do {
  //define variables within the loop...
  int minutes;
  double
    amountDue = 0,   //amount due initializes at zero
    amountStage1,
    amountStage2,
    amountBase;
  char custType, choice;
  string phoneNumber;

  //gather user input - Customer type
  //force output to be either R or B
  bool validCust = false;
  while (!validCust) {
    cout << "Please Enter the Customer Type (R for regular, B for Business): ";
    cin >> custType;
    //forcing lowercase makes program cleaner
    custType = tolower(custType);
    //terminates loop if correct selection is made
    if (custType == 'r' || custType == 'b') {
      validCust = true;
    } else cout   << "invalid customer type." << '\n'
                  << "enter r for Regular and b for business." << '\n';
  }

  //gather user input - phone number
  cout << "Please Enter the Customer Phone Number: ";
  cin >> phoneNumber;

  //gather user input - phone usage in minutes
  //force minutes to be posive -- validation
  bool validMinutes = 0;
  while (!validMinutes) {
    cout << "Enter the phone usage in minutes: ";
    cin >> minutes;
    if (minutes >=0) {
      validMinutes = true;
    } else cout << "Invalid Minutes Entered.  Try Again..." << '\n';
  }

  //perform calculations using peacewise-defined functions
  switch (custType) {
    case 'b':
      //determine total amount due:
      amountBase = B_BASE;
      if (minutes <= 600) {
        amountDue = B_BASE;
        amountStage1 = 0;
        amountStage2 = 0;
      } else if (minutes <= 700) {
        amountDue = B_STAGE1 * minutes - B_STAGE1_OFFSET;
        amountStage1 = amountDue - B_BASE;
        amountStage2 = 0;
      } else {
        amountDue = B_STAGE2 * minutes - B_STAGE2_OFFSET;
        amountStage1 = B_STAGE1_LIMIT - B_BASE;
        amountStage2 = amountDue - B_BASE - amountStage1;
      }
      break;
    case 'r':
      //determine total amount due:
      amountBase = R_BASE;
      if (minutes <= 200) {
        amountDue = R_BASE;
        amountStage1 = 0;
        amountStage2 = 0;
      } else if (minutes <= 450) {
        amountDue = R_STAGE1 * minutes - R_STAGE1_OFFSET;
        amountStage1 = amountDue - R_BASE;
        amountStage2 = 0;
      } else {
        amountDue = R_STAGE2 * minutes - R_STAGE2_OFFSET;
        amountStage1 = R_STAGE1_LIMIT - R_BASE;
        amountStage2 = amountDue - R_BASE - amountStage1;
        break;
      }
  }

  //prepare cout for dollar decimal places
  cout << fixed << showpoint << setprecision(2);
  //print results:
  cout  << "\t\t\n" << "Power Bill For: " << phoneNumber << '\n'
        << "\t\t" << "============" << "\n\n"
        << "Total Minutes: " << minutes << '\n'
        << "Base Payment: " << amountBase << '\n'
        << "Stage 1: " << amountStage1 << '\n'
        << "Stage 2: " << amountStage2 << '\n'
        << "Total Cost: " << amountDue << '\n'
        ;
  //would user like to run again?
  cout << "\t\t\n" << "Run this program again? Y/n: ";
  cin >> choice;
  if (tolower(choice) == 'y') {
    runAgain = true;
  } else runAgain = false;

} while(runAgain);

return 0;
}
