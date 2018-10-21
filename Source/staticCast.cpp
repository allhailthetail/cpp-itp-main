#include <iostream>
using namespace std;

int main()
{
  double valueResult;

  // instructor claims this should return 15.3  but it doesnt.  
  valueResult = static_cast<int>(7.8 + static_cast<double>(15)/2);
  cout << "The Result: " << valueResult << endl;

  return 0;
}
