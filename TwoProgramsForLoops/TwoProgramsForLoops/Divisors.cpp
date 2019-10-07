/*
Programmer: Dylan House
Date: 10/2/19
Description:
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int array[100];
	int number;
	bool prime = false;
	/*
			Splash Screen
	*/

	//system("COLOR 0E");
	//printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  Prime Numbers\n\n\n\n");
	//printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	//printf("\n\n\n\n\t\t\t    Enter a number and this program will tell you its prime status.\n\n\n\n\n\n");
	//_getch();
	//system("cls");
	/*
			Calculations
	*/
	for (number = 0; number <= 100; number++) { //increments the number by 1
		for (int i = 2; i <= number / 2; i++) {
			if (number % i == 0) {
				prime = false;
			}
			else {
				prime = true;
			}
		}
	}
}
//end program
