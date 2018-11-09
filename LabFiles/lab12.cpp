//lab12.cpp
//Matthew Younger

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
    //cin >> storeName[i];
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
