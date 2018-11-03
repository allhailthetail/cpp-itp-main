#include<iostream>
using namespace std;

int main(){
  string
    string1 = "A", //65
    string2 = "B", //66
    string4 = "abc", //
    string5 = "ABC";


//stops comparing at the first different letter it finds...
cout  << string1.compare(string2) << '\n' //-1
      << string2.compare(string1) << '\n' //1
      << string4.compare(string5) << '\n' //(a - A) = 97-65 = 32
      << string5.length() << '\n' //3
      ;
}
