//Use modulus operator to convert seconds to minutes and seconds:
#include <iostream>
using namespace std;

int main()
{
  // Total Seconds:
  int totalSeconds = 125;

  // Varaibles for the minutes and Seconds
  int minutes, seconds;

  // Get numer of minutes
  minutes = totalSeconds / 60;

  // Get the remaining seconds
  seconds = totalSeconds % 60;

  // Display the results
  cout << totalSeconds << " Seconds is Equialent to :\n";
  cout << "Minutes: " << minutes << endl;
  cout << "Seconds: " << seconds << endl;
  return 0;
}
