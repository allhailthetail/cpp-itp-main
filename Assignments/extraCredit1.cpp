/*
ExtraCredit1.cpp
Matthew Younger
---------------
This program determines the price to charge adults and chidren,
including discounted rates depending on the desired hair color.
*/
#include<iostream>    //cout, cin
#include<iomanip>     //setprecision
using namespace std;

int main(){
  //initialize Variables
  const double
    adult_base = 15.50, child_base = 10.50,
    disc_child_blue = 1.50, disc_adult_blue = 2.59,
    disc_child_green = 2.50, disc_adult_green = 3.50;
  double price = 0;
  int colorChoice;
  char hasCoupon;
  string custType, hairColor, strCoupon;

  //welcome
  cout  << '\n'
        << "Welcome to the Hair Salon Customer Price Tool..." << '\n'
        << "Instructions:" << '\n'
        << "Check if customer has coupon (y/n)" << '\n'
        << "Enter customer type (e.g. 'child' or 'adult)" << '\n'
        << "then enter a color code:" << '\n'
        << "0. No Color" << '\n'
        << "1. Green" << '\n'
        << "2. Blue" << "\n\n"
        << "Example Input: 'adult 1'" << '\n'
        << "OR" << '\n'
        << "adult (Press Enter...)" << '\n'
        << "1 (Press Enter...)" << '\n'
        << endl;

  //determine if customer has has a coupon
  cout << "Customer has coupon (y/n)? ";
  cin >> hasCoupon;

  //deterine customer customer type
  cout << "Customer Information(adult/child) (hair color): ";
  cin >> custType >> colorChoice;
  //determine the correct Price
  if (custType == "adult") {
    price += adult_base;          //adult, start with base rate
    if (colorChoice == 1 && hasCoupon == 'y') {
      price -= disc_adult_green;  //adult, green hair color discount
    }
    else if (colorChoice == 2 && hasCoupon == 'y') {
      price -= disc_adult_blue;   //adult, blue hair discount
    }
  }
  else if (custType == "child") {
    price += child_base;          //child, start with base rate
    if (colorChoice == 1 && hasCoupon == 'y') {
      price -= disc_child_green;  //child, green hair discount
    }
    if (colorChoice == 2 && hasCoupon == 'y') {
      price -= disc_child_blue;   //child, blue hair discont
    }
  }

  //converts color code into text for readability
  if (colorChoice == 0) {
    hairColor = "no hair color";
  }
  else if (colorChoice == 1) {
    hairColor = "green hair color";
  }
  else if (colorChoice == 2) {
    hairColor = "blue hair color";
  }

  //converts coupon posession (y/n) for readability
  if (hasCoupon == 'y') {
    strCoupon = "has a coupon";
  }
  else strCoupon = "does not have a coupon.";

  //restates customer information and prints price result
  //sets precision for 2 decimal places for currency
  cout << fixed << showpoint << setprecision(2);
  cout  << '\n'
        << "------------------------------------" << '\n'
        << "A(n) " << custType << '\n'
        << "Requesting: " << hairColor << '\n'
        << "Who " << strCoupon
        << '\n'
        << "Should be charged: $" << price << '\n'
        << "------------------------------------"
        << '\n'
        ;

  //remind cashier that coupon is only valid for hair coloring if applicable.
  if (colorChoice == 0) {
    cout << "Warning: Coupon for colored hair only!!" << '\n';
  }


return 0;
}
