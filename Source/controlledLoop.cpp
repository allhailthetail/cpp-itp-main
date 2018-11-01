/*
This program illustrates how a loop
can run for an amount of time defined inside the
runtime by the user themselves...
*/

#include<iostream>
using namespace std;

int main(){
  int times;

  cout << "How many times should this loop run?? ";
  cin >> times;

  for (int i=0; i <= times; i++)
  cout << "  " << i << endl;
}
