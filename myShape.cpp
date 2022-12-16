/* -- this is a FILEHEADER COMMENT --
	NAME	:	myShape.cpp
	PURPOSE :	This program will ask the user for specifics about the shape's colour, 
	radius and side length to instantiate the shape. After that, it will print out he shape’s name,
	colour, sideLength, perimeter and area in formatted way.

*/
#include "Circle.h"
#include "Square.h"
using namespace std;

int main()
{
	// This string will hold input from the user
	string userInput;

	// This string will hold the colour input from the user
	string colourInput;

	// This variable will hold the radius value
	double radiusInput = 0;

	// This string will hold the side length value
	double sideLengthInput = 0;

	// Create 2 Shape pointers
	Shape* ptrCircle = NULL;
	Shape* ptrSquare = NULL;

	cout << "Enter information for creating a Circle object!" << endl;
	cout << "==========================================================================" << endl;
	cout << "Enter colour (red, green, blue, yellow, purple, pink, orange or undefined)" << endl;

	// Get input from the user
	getline(cin, userInput);

	// copy string to colourInput variable
	colourInput = userInput;

	cout << "Enter Radius" << endl;
	getline(cin, userInput);
	// Convert string to float data-type using atof function
	radiusInput = atof(userInput.c_str());

	// Alocation the memory for a new instance of Circle class
	ptrCircle = new Circle(colourInput, radiusInput);

	// Check if we run of memory
	if (ptrCircle == NULL)
	{
		cout << "Run out of memeory" << endl;
		return 1;
	}

	// Call Show method
	ptrCircle->Show();

	cout << "Enter information for creating a Square object!" << endl;
	cout << "==========================================================================" << endl;
	cout << "Enter colour (red, green, blue, yellow, purple, pink, orange or undefined)" << endl;

	// Get input from the user
	getline(cin, userInput);

	// copy string to colourInput variable
	colourInput = userInput;

	cout << "Enter Side-length" << endl;
	getline(cin, userInput);
	// Convert string to float data-type using atof function
	sideLengthInput = atof(userInput.c_str());

	// Alocation the memory for a new instance of Square class
	ptrSquare = new Square(colourInput, sideLengthInput);

	// Check if we run of memory
	if (ptrSquare == NULL)
	{
		cout << "Run out of memeory" << endl;
		return 1;
	}

	// Call Show method
	ptrSquare->Show();

	// Free memory
	delete(ptrCircle);
	delete(ptrSquare);

	return 0;
}