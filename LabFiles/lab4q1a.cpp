//lab4q1a.cpp
//improed program CORRECTLY calculates numer of brownes that will fit a pan.
//Matthew Younger

#include<iostream>
using namespace std;

int main()
{
  /*
  brownie size is square, constant, and a whole number if measuring whole inches
  pan length and width are presumably also in whole inches
  fit quanity is calculated separately for horizontal and vertical fit,
  forcing whole number answer usin int, concatenating decimal answer.
  */
  const int smBrownieSz = 1, lgBrownieSz = 2;
  int panLen, panWid, fitQtyHoriz, fitQtyVert;

  //gather dimensional data about the pan
  cout << "Please Enter Vertical Length of the Pan:" << endl;
  cin >> panLen;
  cout << "Please Enter Horizontal Width of the Pan:" << endl;
  cin >> panWid;

  //restate the width of the pan for user convenience
  cout << "Your pan is: " << panLen << " inches X " << panWid << " inches" << endl;

  //calculate actual fit of total number of small brownies
  fitQtyHoriz = panWid / smBrownieSz;
  fitQtyVert = panLen / smBrownieSz;
  cout << "Your Pan will fit: " << fitQtyHoriz << " small bownies horizontally, and " <<
  fitQtyVert << " vertically." << "\nTotal Small Brownies: " << fitQtyHoriz * fitQtyVert << endl;

  //calculate actual fit of total number of large brownies
  fitQtyHoriz = panWid / lgBrownieSz;
  fitQtyVert = panLen / lgBrownieSz;
  cout << "Your Pan will fit: " << fitQtyHoriz << " small bownies horizontally, and " <<
  fitQtyVert << " vertically." << "\nTotal Large Brownies: " << fitQtyHoriz * fitQtyVert << endl;


  return 0;
}
