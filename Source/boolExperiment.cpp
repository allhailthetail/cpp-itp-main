/*
Simply testing to verify that the default assumption is that an if
statement only runs if the statement evaluates to true...
*/

#include<iostream>
using namespace std;

int main(){
  bool truefalse;
  int input1, input2;

  cin >> input1 >> input2;
  truefalse = input1 > input2 ? 1 : 0;

  //as demonstrated, the if statement automatically assumes to only run if it
  //evalutates to true!!  Cool!
  if (truefalse) {
    cout << "Success!";
  }

  return 0;
}
