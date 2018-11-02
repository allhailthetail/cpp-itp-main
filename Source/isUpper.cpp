/*
this program takes input data from a string and prints only the uppercase
characters of that string.
*/
#include<iostream>
using namespace std;

int main(){
  string inputstring, upper_str;

  printf("%s\n", "Please input a string!!");
  getline(cin, inputstring);

  for (int i = 0; i < inputstring.length(); i++){
    if(isupper(inputstring[i]))
      upper_str += inputstring[i];
  }

  cout << upper_str << "\n\n";
}
