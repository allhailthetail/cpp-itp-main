//prints header for each month:
#include<iostream>
using namespace std;
void monthHeader(int month){
  const string
    monthName[12] = {"January","February","March","April","May","June",
                "July","August","September","October","November","December"};
//adjust month to be indexed in array
month -= 1;
//print header
cout << left << monthName[month] << ":" << '\n';
cout << "----------" << '\n';
}

//tests the program...
int main(){
  monthHeader(2);
}
