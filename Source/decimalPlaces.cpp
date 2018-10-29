#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  const int HIGH_SCORE = 95;
  int score1, score2, score3;
  double average;

  cout << "Enter 3 test scores and I will average them: ";
  cin >> score1 >> score2 >> score3;
  average = (score1 + score2 + score3) / 3.0;
  cout << fixed << showpoint << setprecision(5);
  cout << "your average is " << average << endl;

  if(average > HIGH_SCORE){
    cout  << "Congratulations!!" << '\n'
          << "That's a high score!!" << '\n';
  }
  return 0;
}
