/*
This assignment is designed to help you practice creating and using functions in C++ that return values. You will write a program 
that calculates the area of a rectangle using functions for input and calculation. Your program should contain the following functions:

	- GetLengthFromUser - This function should prompt the user to enter the length of the rectangle and return the value entered.

	- GetWidthFromUser - This function should prompt the user to enter the width of the rectangle and return the value entered.

	- CalculateArea - This function should take the length and width of the rectangle as parameters and return the calculated area.

	- DisplayArea - This function should display the area of the rectangle.
*/

#include <iostream> //allows us to use cout
#include <conio.h> // allows us to use _getch()

using namespace std;

double GetLengthFromUser()
{
	double dblLength;
	cout << "What is the Length?: ";
	cin >> dblLength;
	return dblLength;
}

double GetWidthFromUser()
{
	double dblWidth;
	cout << "What is the Width?: ";
	cin >> dblWidth;
	return dblWidth;
}

double CalculateArea(double dblLength, double dblWidth)
{
	return dblLength*dblWidth;
}

void DisplayArea(double dblCalculatedArea)
{
	cout << "The area of the rectangle is " << dblCalculatedArea << ".";
}

int main()
{
	double dblLength = GetLengthFromUser();
	double dblWidth = GetWidthFromUser();
	double dblCalculatedArea = CalculateArea(dblLength, dblWidth);

	DisplayArea(dblCalculatedArea);
}