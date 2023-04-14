#include <iostream>
using namespace std;


int arr[20]; // array to be searched
int n; // Number of elements in the array
int i; // Index of array element


void input()
{
	while (true)
	{
		cout << "Enter the number od elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and macimum 20 elements.\n\n";
	}

	// Accept array element
	cout << "\n---------------------\n";
	cout << " Enter array elements \n";
	cout << "\n---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}



void LinearSearch()
{
	char ch;
	int comparison; // Number of comparisons

	do
	{
		// Accept the number to be searched
		cout << "\nEnter the element you want to search: "
	}
}