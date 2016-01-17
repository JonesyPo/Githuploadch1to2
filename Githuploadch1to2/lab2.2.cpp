// This is the Number of Rice Bags Program (lab2.2.cpp)
// This program assists the user in calculating how many bags are needed to hold a ton of rice. 
// The user is prompted by the program to enter how much rice thier bags can hold in pounds and 
// then the program provides them with the number of bags required for the quantity of one ton of rice. 
// Writen by: Stephen Poanessa 
// Date: 12 January 2016
// Sources: CS-161: Chapter 2 Videos.

#include <iostream>

using namespace std;

int main()
{
	//varible declarations
	int tonRice = 2205;
	double poundRiceBagCanHold = 0;

	//read them from the user
	cout << "Please enter the amount of rice in pounds that your bag can hold then "
		<< "press any key to continue." << endl;
	cin >> poundRiceBagCanHold;

	//output 
	cout << "The number of bags needed to hold one metric ton of rice is:" << tonRice / poundRiceBagCanHold << endl;

	return 0;
}
