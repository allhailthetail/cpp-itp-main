#include<iostream>
using namespace std;

int main(){
  char line[25];

  cout << "Tine ends after 24 characters..." << '\n';
  cin.getline(line,25, '\t');
  cout << " " << line << '\n';
}
