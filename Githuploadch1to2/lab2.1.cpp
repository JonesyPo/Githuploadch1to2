// This is the Penny Calculator Program (lab2.1.cpp)
// This program converts user-given amounts of quarters, dimes and nickles into an equivelent amount of pennies.
// Writen by: Stephen Poanessa 
// Date: 12 January 2016
// Sources: CS-161 Chapter 2 Videos, Malik, D.. C++ Programming: From Problem Analysis to Program Design, 7e, 7th Edition. Cengage Learning, 2015. VitalBook file.

#include <iostream>  

using namespace std;

int main()
{
	//varible declarations
	int pennies = 1, dimes = 10, nickels = 5, quarters = 25;
	int numOfQuarters = 0, numOfDimes = 0, numOfNickels = 0;
	
	//read them from the user
	cout << "Please enter the number of quarters and "
		<< "press any key to continue" << endl;
	cin >> numOfQuarters;
	cout << "Please enter number of dimes and "
		<< "press any key to continue" << endl;
	cin >> numOfDimes;
	cout << "Please enter number of nickels and "
		<< "press any key to continue" << endl;
	cin >> numOfNickels;

	//calculate results and the output
	cout << "The total number of pennies for the amount of coins entered is:" << numOfQuarters * quarters + numOfDimes * dimes + numOfNickels * nickels << endl;

	return 0;
}