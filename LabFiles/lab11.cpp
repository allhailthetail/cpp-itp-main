//lab11.cpp
//Matthew Younger
#include<iostream>    //cout, cin
#include<iomanip>     //setprecision()
using namespace std;

int main(){
  const int months = 3;       //change to calculate for more months
  double
    rate,                     //interest rate
    startBal,                 //starting balance
    balTotal,                 //total balance
    deposits,                 //monthly deposits
    withdrawls,               //monthly withdrawls
    interest = 0,             //monthly interest earnings
    interestTotal = 0,        //toal interest
    depositTotal = 0,         //total deposits
    withdrawlTotal = 0;       //total withdrawals



  cout << "Interest Rate: (%)";
  cin >> rate;
  rate /= 1200;               //convert interest to montly decimal
  cout << "Starting Balance: $";
  cin >> startBal;
  balTotal = startBal;        //add principal to total

  for (size_t i = 0; i < months; i++) {
    cout << "\n\n" << "For Month #" << i + 1 << '\n';
    //gather deposit information - must be > 0
    do {
      cout << "Total Deposits: $";
      cin >> deposits;
      if (deposits < 0) {
        cout << '\n' << "Dollars must be greater than zero..." << '\n';
      }
    } while(deposits < 0);
    //gather withdrawal information - must be > 0
    do {
      cout << "Total Withdrawals: $";
      cin >> withdrawls;
      if (withdrawls < 0) {
        cout << '\n' << "Dollars must be greater than zero..." << '\n';
      }
    } while(withdrawls < 0);
    //calculate interest
    interest = rate * 0.5 * (balTotal + (balTotal + deposits - withdrawls));
    //update totals:
    interestTotal += interest;
    depositTotal += deposits;
    withdrawlTotal += withdrawls;
    balTotal = balTotal + deposits - withdrawls + interest;
  }

  //print results:
  cout << fixed << showpoint << setprecision(2);
  cout  << "Total Results For " << months << " Month Period:" << "\n\n"
        << "Starting Balance: $" << startBal << '\n'
        << "Total Deposits: $" << depositTotal << '\n'
        << "Total Withdrawals: $" << withdrawlTotal << '\n'
        << "Total interest: $" << interestTotal << '\n'
        << "Final Balance: $" << balTotal << '\n'
        ;

  return 0;      //end program
}
