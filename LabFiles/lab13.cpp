/*
lab13.cpp
Matthew Younger
*/
#include<iostream> //cout, cin
#include<iomanip> //setprecision, fixed
using namespace std;
/*Determine day for max snowfall*/
int maxSnowfall(double snow[],const int& DAYS_NUM){
  int snowMax = 0;
  for (int i = 0; i < DAYS_NUM; i++) {
    if (snow[snowMax] < snow[i])
      snowMax = i;
  }
  return snowMax;
}
double averageSnowfall(double snow[], const int& DAYS_NUM){
  double snowSum = 0, snowAvg;
  for (int i = 0; i < DAYS_NUM; i++) {
    snowSum += snow[i];
  }
  snowAvg = snowSum / DAYS_NUM;
  return snowAvg;
}
int main(){
  string monthName;
  const int DAYS_NUM = 7;
  double
    recordDates[DAYS_NUM],
    snowAmt[DAYS_NUM];
  //gather user input:
  cout << "Name of Month: ";
  cin >> monthName;
  /*user input - recorded date & snow total for that day*/
  for (int i = 0; i < DAYS_NUM; i++) {
    cout << "Date Recorded: ";
    cin >> recordDates[i];
    cout << "Snowfall for Date: ";
    cin >> snowAmt[i];
  }
  /*Find date of max snowfall*/
  int snowMaxDate = maxSnowfall(snowAmt,DAYS_NUM);
  /*Print the generated results*/
  cout  << "\n\n" << "Snow Report " << monthName << " "
        << recordDates[0] << " - " << recordDates[DAYS_NUM - 1] << '\n'
        << setw(12) << left << "Date:" << setw(12) << "Snow Fall:" <<'\n'
        ;
  for (int i = 0; i < DAYS_NUM; i++) {
    cout << setw(12) << left << recordDates[i];
    cout << setw(12) << left << snowAmt[i];
    cout << '\n';
  }
  cout  << "\n\n\n"
        << "Max Snowfall Was: " << snowAmt[snowMaxDate] << " on "
        << monthName << " " << recordDates[snowMaxDate] << '\n'
        << "Average Snowfall: " << fixed << setprecision(2)
        << averageSnowfall(snowAmt,DAYS_NUM)
        << "\n\n"
        ;
  return 0;
}
