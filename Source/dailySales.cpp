#include<iostream>
using namespace std;

int main(){

  int days;
  double sales, ave = 0;

  cout << "How many days of sales to calculate? ";
  cin >> days;

  for (int i = 1; i <= days; i++) {
    cout << "Sales for day # " << i << " $";
    cin >> sales;
    ave += sales;
  }
  ave = ave / days;
  cout << "\n\n" << "Average Sales: $" << ave << "\n\n";
}
