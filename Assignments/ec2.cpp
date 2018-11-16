/*
ec2.cpp
Extra Credit Assignment #2
Matthew Younger*/
#include<iostream>
#include<iomanip>
using namespace std;
/*Convert Farenheit to Celcuis*/
double farenheitToCelcius(int fTemp){
  return (fTemp - 32) / 1.8;
}
/*Convert Miles to Kilometers*/
double milesToKilometers(int miles){
  return miles * 1.609;
}
/*Convert Liters to Gallons*/
double litersToGallons(int liters){
  return liters / 3.785;
}
/*Displays menu - user choice & data input*/
void displayMenu(){
  int choice;
  double
    Temperature,
    Miles,
    Liters;
  cout  << "\t\t\t" << "Welcome to the Conversion Program"
        << "\n\t\t\t" << "================================="
        ;
  cout  << '\n' << "1. Farenheit to Celcuis"
        << '\n' << "2. Miles to Kilometers"
        << '\n' << "3. Liters to Gallons"
        << '\n' << "4. Exit from program"
        ;
  cout << "\n\n" << "Choice: ";
  cin >> choice;
  switch (choice) {
    case 1 :
      cout << "\n\n" << "Temperature in Farenheit: ";
      cin >> Temperature;
      cout  << "That is: "
            << farenheitToCelcius(Temperature)
            << " deg C"
            << '\n'
            ;
      break;
    case 2 :
      cout << "\n\n" << "Distance in Miles: ";
      cin >> Miles;
      cout  << "That is: "
            << milesToKilometers(Miles)
            << " Kilometers"
            << '\n'
            ;
      break;
    case 3 :
      cout << "\n\n" << "Volume in Liters: ";
      cin >> Liters;
      cout  << "That is: "
            << litersToGallons(Liters)
            << " Gallons."
            << '\n'
            ;
      break;
    case 4 :
      cout << "Exiting Program... " << '\n';
      break;
    default :
      cout << "Invalid option.  Exiting.  Re-run program..." << '\n';
      break;
  }
}
int main(){
  displayMenu();
  return 0;
}
