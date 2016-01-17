// This is the Volume of Sphere Program (spherevolume.cpp)
// This program prompts the user to input a value of a radius and outputs the volume of a sphere.  
// Writen by: Stephen Poanessa 
// Date: 12 January 2016
// Sources: CS-161 Chapter 2 Videos and Malik, D..C++ Programming: From Problem Analysis to 
// Program Design, 7e, 7th Edition.Cengage Learning, 2015. VitalBook file.

#include <iostream>  
#include <iomanip>

using namespace std;

int main()
{
	//varible declarations:
	double radius = 0;
	const double pi = 3.1415926;
	const double fractionValue = 1.333333333;

	//read them from user:
	cout << "Please enter the value of the radius and "
		 << "press any key to continue." << endl;
	cout << "Radius: ";
	cin  >> radius;

	//calculate results and the output:
	cout << endl;
	cout << "A sphere with a radius of ";
	cout << radius;
	cout << " has a volume of " << fixed << setprecision (2) << radius * radius * radius * pi * fractionValue;
	cout << " units cubed."<< endl;

	return 0;
}
