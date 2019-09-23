/*
	Programmer: Dylan House
	Date: 09/19/19
	Description: Gathers variables from a quadratic function and solves it
	using the quadratic formula.
*/

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <type_traits>
using namespace std;

int main()
{
	/*
			Variable Dictionary
		a           =            a variable of the quadratic formula
		b           =            b variable of the quadratic formula
		c           =            c variable of the quadratic formula
		x1          =            first variant of the result
		x2          =            second variant of the result
		d           =            discriminant
		r           =            real
		i           =            imaginary
	*/

	float a, b, c, x1, x2, d, r, i;
	
	/*
			Splash Screen
	*/
	system("COLOR 0E");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  Quadratic Formula\n\n\n\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\n\n\t\t\t    Enter the roots of your quadratic equation to get the results.\n\n\n\n\n\n");
	printf("\t\t\t       Uses the following form:             f(x) = ax^2 +bx + c");
	_getch();
	system("cls");

	/*
			Inputs
	*/
	system("COLOR 03");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t         Enter A variable :    "); 	cin >> a;
	printf("\n\t\t\t\t         Enter B variable :    "); 	cin >> b;
	printf("\n\t\t\t\t         Enter C variable :    "); 	cin >> c;
	system("cls");

	/*
			Catches
	*/
	if (a == 0) { 
		printf("Invalid A variable: Cannot divide by 0.\n\n");
		exit(0);
	}

	/*
			Calculations
	*/
	d = (pow(b, 2)) - (4 * (a * c));
	if (d > 0) {
		x1 = (((0 - b) + sqrt((pow(b, 2)) - (4 * (a * c))))) / (2 * a);
		x2 = (((0 - b) - sqrt((pow(b, 2)) - (4 * (a * c))))) / (2 * a);
		printf("\n");
		//outputs
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t X1 = %f", x1);
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t X2 = %f", x2);
	}
	else if (d == 0) {
		x1 = (0 - b) / (2 * a);
		x2 = (0 - b) / (2 * a);
		//outputs
		printf("\n");
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t X1 = %f", x1);
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t X2 = %f", x2);
	}
	else if (d < 0) {
		r = -b / (2 * a);
		i = sqrt(-d) / (2 * a);
		//outputs
		printf("\n");
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t X1 = %f + %fi", r, i);
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t X1 = %f - %fi", r, i);
	}

		_getch();
}//program end

