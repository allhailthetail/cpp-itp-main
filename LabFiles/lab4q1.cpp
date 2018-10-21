//lab4q1.cpp
//program mathematically calculates numer of brownes that will fit a pan.
//Matthew Younger

#include<iostream>
using namespace std;

int main()
{
  /*
  surface area of brownies is constant and whole number if measuring whole inches
  pan length and width are presumably also in whole inches
  cannot fit partial brownies, so fitQty is also forced to be whole units.
  */
  const int smBrownieSa = 1, lgBrownieSa = 4;
  int panLen, panWid, fitQty;

  //gather dimensional data about the pan
  cout << "Please Enter Length of the Pan:" << endl;
  cin >> panLen;
  cout << "Please Enter Width of the Pan:" << endl;
  cin >> panWid;

  //restate the width of the pan for user convenience
  cout << "Your pan is: " << panLen << " inches X " << panWid << " inches" << endl;
  //calculate & pint the theoretical fit quantity of small brownies
  fitQty = panLen * panWid / smBrownieSa;
  cout << "Your Pan will fit: " << fitQty << " small bownies." << endl;
  //calculate & print the theoretical fit quantity of large brownies
  fitQty = panLen * panWid / lgBrownieSa;
  cout << "Your pan will fit: " << fitQty << " large brownies." << endl;

  return 0;
}
