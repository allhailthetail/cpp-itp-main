#include<iostream>
using namespace std;
int main()
{
	int * dynamicArray;  // pointer to and array on int that will be created later
	int size;

	cout << " enter the array size :   ";
	cin >> size;

	// creating the array
	dynamicArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "enter array element " << i + 1 << endl;
		cin >> dynamicArray[i];
	}
	cout << " Array elements you have entered are : " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << dynamicArray[i] << endl;
	}

	// deallocate memory
	delete dynamicArray;

	return 0;
}
