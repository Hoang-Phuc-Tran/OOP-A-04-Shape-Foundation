#include "Circle.h"


///\brief To instantiate a new Circle object - given a set of attribute values
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. It will instantiate a new object with colour and radius value entered by user. 
/// The colour and the radius is set if these values is valid, otherwise it will set colour is "undefined" and radius is 0.
/// \param newColour - <b>string </b> -representation of the Circle's colour
/// \param newRadius - <b>double </b> -representation of the Circle's radius
///
///\return As this is a <i>constructor</i> for the Circle class, nothing is returned
Circle::Circle(string newColour, double newRadius)
{
	if (validateInput(newColour) == COLOUR_VALID)
	{
		colour = newColour;
	}
	else
	{
		colour = "undefined";
	}

	if (newRadius >= 0)
	{
		radius = newRadius;
	}
	else
	{
		radius = 0;
	}
}

///\brief To instantiate a new Circle object by default
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. By default, This constructor will initialize an Circle object with 
/// the colour is "undefned", the radius is 0 and the name is "Unknown".
/// \param None <b>void</b>
///
///\return As this is a <i>constructor</i> for the Shape class, nothing is returned
Circle::Circle(void)
{
	radius = 0;

	name = "Unknown";

	colour = "undefined";
}

/// \brief Called upon to <i>destroy</i> a Circle object - once it loses <b>scope</b>
/// \details <b>Details</b>
///
/// A detailed description of what this method. By default, This destructor will destroy the Circle object once it loses its scope and display
/// a message "The circle is broken..."
///
/// \param NONE - <b>void</b>
///
/// \return As this is a <i>destructor</i> for the Circle class, nothing is returned
Circle::~Circle(void)
{
	cout << "\nThe circle is broken ...";
}

///\brief Called to return a float data-type of "radius" data members
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to return a float data-type of "radius" data members
/// \param None <b>void</b>
///
///\return It returns a <b>double</b>
double Circle::GetRadius(void)
{
	return radius;
}

///\brief Called to set a new radius to "radius" data members
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to set a float data-type of "radius" data member.
///  If newRadius parameter is valid, the value will be set and it will return a true, otherwise it will set the "radius" data member is 0 and return false.
/// \param newName - <b>double </b> -representation of the radius of the Circle
///
///\return It returns a <b>bool</b>
bool Circle::SetRadius(double newRadius)
{
	bool redCode = false;

	if (newRadius >= 0)
	{
		radius = newRadius;
		redCode = true;
	}
	else
	{
		radius = 0;
	}

	return redCode;
}


///\brief Called to print out the name, colour, radius, perimeter and area of the Circle object.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to print out all the data members following the provided format. It includes 
/// the name, colour, radius, perimeter and area of the Circle. 
///
/// \param NONE - <b>void</b>
///
///\return nothing is returned
void Circle::Show(void)
{
	double circumference = 0;

	double area = 0;

	circumference = Perimeter();

	area = Area();

	cout << "\nShape Information" << endl;
	cout << "Name\t\t: Circle" << endl;
	cout << "Colour\t\t: " << colour << endl;
	printf("Radius\t\t: %.2f cm\n", radius);
	printf("Circumference\t: %.2f cm\n", circumference);
	printf("Area\t\t: %.2f cm\n\n", area);
}

///\brief Called to caculate the perimeter of the Circle object.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to caculate the perimeter of the Circle object according to the formula
/// \param None <b>void</b>
///
///\return It returns a <b>double</b>
double Circle::Perimeter(void)
{
	double result = 0;

	result = 2 * radius * PI;

	return result;
}

///\brief Called to caculate the area of the Circle object.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to caculate the area of the Circle object according to the formula
/// \param None <b>void</b>
///
///\return It returns a <b>double</b>
double Circle::Area(void)
{
	double result = 0;

	result = PI * radius * radius;

	return result;
}

///\brief Called to caculate the overal dimension of the Circle object.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to caculate the overal dimension of the Circle object according to the formula
/// \param None <b>void</b>
///
///\return It returns a <b>double</b>
double Circle::OverallDimension(void)
{
	double result = 0;

	result = 2 * radius;

	return result;
}
