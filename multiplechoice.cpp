/*
Programmer: Dylan House
Date: 9/19/19
Description: Multiple Choice Questions
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main()
{

	int choice;
	printf("\n\n\t\t\t\t\t\t\t\t\tIntro");
	printf("\n\t\t\tThis program asks one of 5 questions.");
	printf("Menu:");
	printf("1) Addition");
	printf("2) Subtraction");
	printf("3) Multiplication");
	printf("4) Division");
	printf("5) Modular");
	printf("Please make a selection:");
	cin >> choice;
	system("CLS");
	if (choice == 1) {
		char aa;
		printf("You've chosen addition! Here's your problem: \n36 + 10 = ?\n\n");
		printf("A) 45\nB) 16\nC)46\nD)26\n\n");
		printf("Please enter your answer: ");
		cin >> aa;
	}
}
