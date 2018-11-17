/*
This little program demonstrates how you can edit a variable globally,
that is - outside the method's bounds...
*/
#include<iostream>
using namespace std;
int changeNumber(int &num){
  num = 20;
  return num;
}
int main(){
  int num = 5;
  cout << "Number before change: " << num << "\n\n";
  changeNumber(num);
  cout << "Number AFTER change: " << num << "\n\n";
}
