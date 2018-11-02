/*
This program sums the individual numbers of a given integer and
prints the result.
*/
#include<iostream>
using namespace std;

int main(){
  int sum = 0, input;
  printf("%s\n", "Input integer of any size:");
  cin >> input;

  while (input > 0 ) {
    sum += input % 10;
    input /= 10;
  }

  cout << "The sum is: " << sum << "\n\n";
}
