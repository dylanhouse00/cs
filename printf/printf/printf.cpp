#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>
#include <string>
using namespace std;
int main()
{


	// How to output integers and set the 
	// field width with right and left justification:
	
	int a = 5280;
	printf(" Hello World\n");
	printf(" There are %i feet in a mile.\n", a);

	// Sets the field width to 10 and right justifies.
	printf(" There are %10i feet in a mile.\n", a);

	// Sets the field width to 10 and left justifies.
	printf(" There are %-10i feet in a mile.\n", a);
	_getch();
	system("cls");

	// How to output and format floats and doubles:
	float pi = 3.141592;
	printf(" PI = %f\n", pi);
	printf(" PI = %10f\n", pi);
	// Field width of 10 and Two decimals
	printf(" PI = %10.2f\n", 5, pi);
	// Star * allows for a variable field width
	printf(" PI = %*.2f\n", 5, pi);
	_getch();
	system("cls");


	// How to output and format char variables:
	char ch = 'D';
	printf(" My first initial is %c", ch);
	_getch();
	system("cls");

	// How to output and format string variables
	string myName = "Dylan";
	printf(" My initial is %s\n", myName.c_str());
	_getch();
	system("cls");

	//More about the star *
	int count = 1;
	while (count <= 9) {
		printf("%*i\n", count - 1, count++);
	}
	_getch();
	system("cls");
}
