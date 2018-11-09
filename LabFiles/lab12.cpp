//lab12.cpp
//Matthew Younger

#include<iostream>
using namespace std;

int main(){
  const int stores = 10;          //change value for more stores
  int salesMax,
      salesMin;
  double
    sales[stores],                //tracks sales by store
    salesAvg = 0.0;
  string storeName[stores];       //tracks store name

  //gather user input - store name and sales:
  for (size_t i = 0; i < stores; i++) {
    cout << "Store Name: ";
    cin >> storeName[i];
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

  //print results:
  cout  << "Sales Results:" << "\n\n"
        << "Max Sales: " << storeName[salesMax] << "  $" << sales[salesMax] << '\n'
        << "Min Sales: " << storeName[salesMin] << "  $" << sales[salesMin] << '\n'
        << "Avg Sales: " << "$" << salesAvg
        ;

  return 0;
}
