/*
a1q3.cpp
Matthew Younger

program gathers weight of user in feet and inches, then calculates
ideal weight based on assumed constants.
*/

#include<iostream>
using namespace std;

int main()
{
  //define variables
  const int femConst = 5, maleConst = 6;
  double femWeight, maleWeight, height_ft, height_in;

  //gather user data
  cout << "Please provide your height, providing feet first:\n";
  cin >> height_ft;
  cout << "Please provide remainin height in inches:\n";
  cin >> height_in;

  //perform computations
  //convert height to inches only and compute how many inches above
  // 5 feet (60") they are
  height_in += 12 * height_ft - 60;
  //calculate appropriate weights
  femWeight = 100 + femConst * height_in;
  maleWeight = 106 + maleConst * height_in;

  //print results
  cout << "If you are a female, you should weigh: \t" << femWeight << endl;
  cout << "If you are a male, you should weigh: \t" << maleWeight << endl;
  cout << "Provided that you're " << height_in << " Inches Tall." << endl;
}
