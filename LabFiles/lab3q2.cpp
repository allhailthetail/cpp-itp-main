#include<iostream>
using namespace std;

//program simply converts farenheit temperature to celsius temperature
int main()
{
  double deg_f, deg_c;

  cout << "Please Enter Temperature in Farenheit:" << endl;
  cin >> deg_f;

  //convert farenheit to celcius:
  deg_c = (5.0 / 9) * (deg_f - 32);

  //print result
  cout << deg_f << " Farenheit is equal to " << deg_c << " Celsius" << endl;

  return 0;
}
