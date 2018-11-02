//lab9.cpp
//Matthew Younger
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
  const double GCONST = 9.8;
  double  bridgeEstimate, //user-estimated bridge height
          realDist,       //value stores mathematical height of bridge
          timeObserved;   //user-estimated flight time

  //gather user input & welcome
  cout  << "Welcome to the bridge height estimation tool!" << '\n'
        << "To use this tool, simply input the height you think" << '\n'
        << "the bridge is and the time it took the object to fall." << '\n'
        << "The calculator will output the distance traveled per second" << '\n'
        << "And gauge how accurate your prediction of the height of" << '\n'
        << "the bridge was."
        ;
  cout << "\n\n" << "Please input the time of the fall in seconds: ";
  cin >> timeObserved;
  cout << "Please input the height of the bridge in meters: ";
  cin >> bridgeEstimate;

  //configure output for consistency of decimal places:
  cout << fixed << showpoint << setprecision(3);

  //output used for delineation for following loop
  cout  << "\n\n"
        << "Time Falling (Seconds) Distance Fallen (Meters)" << '\n'
        << "***********************************************" << '\n'
        ;
  //perform time vs distance calculation
  for (int i = 0; i <= timeObserved; i++) {
    //mathematical distance fallen per second
    realDist = 0.5 * GCONST * pow(i,2);
    cout << "Time:" << i << " sec" << "\tDistance:" << realDist << "\n\n";
  }

  //output data regarding accuracy of the user estimates
  if (bridgeEstimate < 0.5 * GCONST * pow(timeObserved,2)) {
    cout  << "Warning, invalid data." << '\n'
          << "Is the bridge taller than predicted?" << '\n';
  }
    else if (bridgeEstimate > 0.5 * GCONST * pow(timeObserved,2)) {
      cout  << "Warning, invalid data." << '\n'
            << "Is the bridge shorter than predicted?" << '\n';
    }
      else
        cout << "Congratulations!  Your Estimates are Correct!" << '\n';

  return 0;
}
