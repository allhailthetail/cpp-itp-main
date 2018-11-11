#include<iostream>
using namespace std;
int monthLastDay(int month){
  //0 january, 11 december, etc
  const int monthLastDay[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
  month -= 1; //format month to be indexed
  return monthLastDay[month];
}

int main(){
  cout << monthLastDay(1) << '\n'; //eg. Jaunary
}
