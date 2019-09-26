#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
	/*
			While Loops
	*/

	int count = 1;
	system("cls");
	while (count <= 10) {
		/*
			Code inside the loop will repeat until the 
			condition is false.
		*/

		printf(" Count = %10i\n", count++);
	}//ends while loop

	/*
			do-while loops will run at least one time
	*/

	char selection;
	float total = 0.0f;
	do {
		system("cls");
		cout << "1. Burger\n";
		cout << "2. Fries\n";
		cout << "3. Beverage\n";
		cout << "4. Exit\n";
		printf("Total = %.2f", total);
		selection = _getch();
		switch (selection) {
		case '1': total = total + 6.22f;
			break;
		case '2': total = total + 1.79f;
			break;
		case '3': total = total + 1.79f;
			break;
		case '4':
			break;
		default: 
			cout << "Error";
			Sleep(1000);
			break;
		}//ends switch statement
	} while (selection != '4'); //ends do-while loop
}
