//lab12.cpp
//Matthew Younger
/*
//Pre-Lab:

//1.
//GIVEN:
int main(){
  int a[5] = {10,11,67,80,68};      //10,80,68 are printed

  for (size_t i = 0; i < 5; i++) {
    if (a[i] % 2 == 0) {            //print only even numbers...  %2 = 0
      cout << a[i] << " " << endl;
    }
  }
}

//2.
//GIVEN:
string city[5] = {"Tempe", "New York", "Atlana", "Flagstaff", "Chicago"};

int x = 0;
for (int i = 0; i < 5; i++) {
  if (city[i].length() > city[x].length()) {    //get longest city in array
    x = i;
  }
}

cout << city[x];        //print longest city's name.
}

*/

//begin lab12
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  const int stores = 10;          //change value for more stores
  int salesMax,
      salesMin;
  double
    sales[stores],                //tracks sales by store
    salesAvg = 0.0;
  string storeName[stores];       //tracks store name

  //program intro
  cout  << "Welcome to the sales tacker tool!" << '\n'
        << "Simply input the name of the store and its sales." <<'\n'
        << "The calculator then calculates: " << '\n'
        << "1. The Highest Sales by Store," << '\n'
        << "2. The Lowest Sales By Store," << '\n'
        << "3. The Average Sales Overall." << "\n\n"
        ;

  //gather user input - store name and sales:
  for (size_t i = 0; i < stores; i++) {
    cout << "Store Name: ";
    getline(cin >> ws, storeName[i]);
    cout << "Store Sales: $";
    cin >> sales[i];
  }

  //store with max Sales
  for (size_t i = 0; i < stores; i++) {
    salesMax = (sales[salesMax] < sales[i])
      ? i
      : salesMax;
  }
  //stores with min sales
  for (size_t i = 0; i < stores; i++) {
    salesMin = (sales[salesMin] > sales[i])
      ? i
      : salesMin;
  }

  //calculate average
  for (size_t i = 0; i < stores; i++) {
    salesAvg += sales[i];
    salesAvg /= stores;
  }


  cout << fixed << showpoint << setprecision(2);        //output is dollars

  cout << '\n' << "Sales Results:" << "\n\n";
  cout << "Max Sales:" << '\n';                         //max sales
  cout << setw(30) << storeName[salesMax];
  cout << "\t$" << sales[salesMax] << '\n';

  cout << "Min Sales:" << '\n';                         //min sales
  cout << setw(30) << storeName[salesMin];
  cout << '\t' << '$' << sales[salesMin] << '\n';

  cout << "Avg Sales:" << '\n';                         //avg sales
  cout << setw(30) << '\t' << '$' << salesAvg << '\n';

  return 0;                                             //end program
}
