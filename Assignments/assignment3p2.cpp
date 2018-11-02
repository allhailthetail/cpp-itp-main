#include<iostream>
using namespace std;

int main(){
  int minutes;
  double amountDue = 0;   //amount due initializes at zero
  const double            //constants for business rates:
    B_BASE = 99.99,
    B_STAGE1 = 0.45,
    B_STAGE1_OFFSET = 170.01,
    B_STAGE2 = 0.99,
    B_STAGE2_OFFSET = 548.01;

  char custType;
  string phoneNumber;
  bool validCust = 0;

  //gather user input - Customer type
  //force output to be either R or B
  while (!validCust) {
    cout << "Please Enter the Customer Type (R for regular, B for Business): ";
    cin >> custType;
    //forcing lowercase makes program cleaner
    custType = tolower(custType);
    //terminates loop if correct selection is made
    if (custType == 'r' || custType == 'b')
      validCust = 1;
  }

  //gather user input - phone number
  cout << "Please Enter the Customer Phone Number: ";
  cin >> phoneNumber;

  //gather user input - phone usage in minutes
  cout << "Enter the phone usage in minutes: ";
  cin >> minutes;

  //perform calculations
  switch (custType) {
    //business rate - using peacewise defined functions
    case 'b':
      //used no more than 600 minutes:
      amountDue = (minutes <= 600 && minutes) ? B_BASE : amountDue;
      //used no more than 700 minutes:
      amountDue = (minutes > 600 && minutes <= 700) ? (B_STAGE1 * minutes - B_STAGE1_OFFSET) : amountDue;
      //used more than 700 minutes:
      amountDue = (minutes > 700) ? B_STAGE2 * minutes - B_STAGE2_OFFSET : amountDue;
      break;
    case 'r':
      //

  }

}
