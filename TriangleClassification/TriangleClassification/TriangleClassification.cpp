/*
	Programmer: Dylan House
	Date: 09/24/29
	Description: Determine the type of the 
	triangle based on 3 angles you input.
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
		result       =        1: equilateral. 2: isoceles. 3: scalene.
		acute        =        determines whether or not the triangle is acute.
		right        =        determines whether or not the triangle is right.
	*/

	float a, b, c;
	int result;
	bool acute, right;

	/*
			Splash Screen
	*/
	system("COLOR 0E");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  Triangle Classifier\n\n\n\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\n\n\t\t\t    Enter the three angles of a triangle to receive its classification.\n\n\n\n\n\n");
	_getch();
	system("cls");

	/*
			Inputs
	*/
	system("COLOR 03");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t         Enter angle 1 :    "); 	cin >> a;
	printf("\n\t\t\t\t         Enter angle 2 :    "); 	cin >> b;
	printf("\n\t\t\t\t         Enter angle 3 :    "); 	cin >> c;
	system("cls");

	/*
			Calculations
	*/
	do {
		do {
			if (a == 60 && b == 60 && c == 60) {
				result = 1;
				if (a == 90 || b == 90 || c == 90) {
					right = true;
				}
				if (a > 90 && b > 90 && c > 90) {
					acute = true;
				}
			}


			else if (a == b || a == c || b == c) {
				result = 2;
				if (a == 90 || b == 90 || c == 90) {
					right = true;
				}
				if (a > 90 && b > 90 && c > 90) {
					acute = true;
				}
			}
			else if (a != b && a != c && b != c) {
				result = 3;
				if (a == 90 || b == 90 || c == 90) {
					right = true;
				}
				if (a > 90 && b > 90 && c > 90) {
					acute = true;
				}
			}
		} while (a < 0 || b < 0 || c < 0);
	} while (a + b + c != 180);

	/*
			Outputs
	*/
	switch (result) {
	case 1:
		if(right = true){
			cout << "Your triangle is a Right Isoceles Triangle.";
		}
		else if (acute = true) {
			cout << "Your triangle is a Acute Isoceles Triangle.";
		}
		else {
			cout << "Your triangle is Isoceles.";
		}
		break;
	case 2:
		if (right = true) {
			cout << "Your triangle is a Right Isoceles Triangle.";
		}
		else if (acute = true) {
			cout << "Your triangle is a Acute Isoceles Triangle.";
		}
		else {
			cout << "Your triangle is Isoceles.";
		}
		break;
	case 3:
		if (right = true) {
			cout << "Your triangle is a Right Scalene Triangle.";
		}
		else if (acute = true) {
			cout << "Your triangle is a Acute Scalene Triangle.";
		}
		else {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tYour triangle is Scalene.";
		}
		break;
	}
	_getch();
} // Program end