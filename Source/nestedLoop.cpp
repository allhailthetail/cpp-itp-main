//program simply demonstrates nested loops
#include<iostream>
using namespace std;

int main(){
  //iniialize the variables
  int temp;
  //gather user input
  printf("%s\n", "Enter Temperature:");
  cin >> temp;
  //calculate message given the temperature...
  if (temp >= 80) {
    cout << "Swimming" << endl;}
    else if (temp >= 60) {
      cout << "Tennis" << endl;}
      else if (temp >= 40) {
        cout << "Golf" << endl;}
        else if (temp < 39) {
          cout << "Holy fuck that's cold!!" << endl;
          cout << "Don't freeze your dick off out there!!" << endl;
        }
  //end the program
  return 0;
}
