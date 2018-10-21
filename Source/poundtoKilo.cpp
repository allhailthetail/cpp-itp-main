#include<iostream>
using namespace std;

int main()
{
  const float conversion = 0.453593; // multiply pounds for kilos...
  double pounds, kilograms;

  cout << "Please Enter Weight in Enlish Pounds:" << endl;
  cin >> pounds;

  //Convert to Kilograms:
  kilograms = pounds * conversion;

  //print result
  cout << pounds << " pounds is equal to " << kilograms << " Kilograms" << endl;

  return 0;
}
