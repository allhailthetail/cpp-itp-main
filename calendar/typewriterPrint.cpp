#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int
    rows = 5,
    columns = 5;
  string
     output = "=";
  for (size_t i = 0; i < columns; i++) {
    for (size_t i = 0; i < rows; i++) {
      cout << left << setw(5) << output;
    }
  cout << '\n';
  }
}
