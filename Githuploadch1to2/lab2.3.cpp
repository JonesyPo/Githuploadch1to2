// This is the Picture Frame Calculator Program (lab2.3.CPP)
// This program takes a user-given length of a wire and outputs the length and width of a frame that could be made from bending it. 
// Writen by: Stephen Poanessa 
// Date: 12 January 2016
// Sources: CS-161 Chapter 2 Videos

#include <iostream>  

using namespace std;

int main()
{
	//varible declarations
	double lengthOfWire = 0;

	//read them from the user
	cout << "Please enter the length of the wire,"
		<< " then press any key to continue." << endl;
	cin >> lengthOfWire;
	
	//calculate results and the output
	cout << "The Width of the frame is: " << lengthOfWire / 4 << endl;
	cout << "The length of the frame is: " << lengthOfWire / 4 * (1.5) << endl;

	return 0;
}