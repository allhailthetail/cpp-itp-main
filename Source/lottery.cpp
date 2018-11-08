#include<iostream>
using namespace std;

int main(){
  const int SIZE = 3;
  int lottery[SIZE],
      ticket[SIZE],
      match = 0;

  cout << "Input Lottery Ticket Choice:";
  for (size_t i = 0; i < SIZE; i++) {
    cin >> ticket[i];
  }

  //initialize a random seed for random
  srand (time(NULL));
  for (size_t i = 0; i < SIZE; i++) {
    lottery[i] = rand() % 5 + 0;  //random number between 0 and 5
  }
  //print what the user bought
  cout << "User Entered:" << '\n';
  for (size_t i = 0; i < SIZE; i++) {
    cout << ticket[i] << '\t';
  }
  //print what won
  cout << '\n' << "Winning Ticket:" << '\n';
  for (size_t i = 0; i < SIZE; i++) {
    cout << lottery[i] << '\t';
  }
  //determine if you won:
  for (size_t i = 0; i < SIZE; i++) {
    if (lottery[i] == ticket[i]) {
      match++;
    }
  }
  if (match == SIZE) {
    cout << "WINNER!";
  } else cout << "Loser...";
}
