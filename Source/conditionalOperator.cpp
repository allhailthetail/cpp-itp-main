#include<iostream>
using namespace std;

int main(){
  int firstVar, secondVar, result;

  std::cout << "Input Two Integers between 0 and 10" << '\n';
  cin >> firstVar >> secondVar;

  //use a conditional opeator to store the larger variable as result
  /*
  this is equivalent to :
  if (firstVar > secondVar) {
    result = firstVar
  }
  else result = secondVar
  */
  result = (firstVar > secondVar ? firstVar : secondVar);

  //print result:
  cout  << "First variable: "  << firstVar << '\n'
        << "Second variable: "  << secondVar << '\n'
        << "Result:"  << result << '\n';

  return 0;
}
