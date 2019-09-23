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


	printf("\n\n\t\t\t\t\t\tIntro");
	printf("\n\t\t\tThis program asks one of 5 questions.\n");
	printf("Menu:\n");
	printf("1) Addition\n");
	printf("2) Subtraction\n");
	printf("3) Multiplication\n");
	printf("4) Division\n");
	printf("5) Modular\n");
	printf("Please make a selection:");
	cin >> choice;
	system("CLS");
	if (choice == 1) {
		char aa;
		printf("You've chosen addition! Here's your problem: \n36 + 10 = ?\n\n");
		printf("A) 45\nB) 16\nC) 46\nD) 26\n\n");
		printf("\nPlease enter your answer: ");
		cin >> aa;
		switch (aa) {
		case 'A':
			cout << "Your answer is false!";
			break;
		case 'B':
			cout << "Your answer is false!";
			break;
		case 'C':
			cout << "Your answer is correct!";
			break;
		case 'D':
			cout << "Your answer is false!";
			break;
		default: printf("Your answer should be either A, B, C, or D!");
			break;
		}
	}

	if (choice == 2) {
		char aa;
		printf("You've chosen addition! Here's your problem: \n10 - 5 = ?\n\n");
		printf("A) 6\nB) 5\nC) 3\nD) 15\n\n");
		printf("Please enter your answer: ");
		cin >> aa;
		switch (aa) {
		case 'A':
			cout << "Your answer is false!";
			break;
		case 'B':
			cout << "Your answer is correct!";
			break;
		case 'C':
			cout << "Your answer is false!";
			break;
		case 'D':
			cout << "Your answer is false!";
			break;
		default: printf("Your answer should be either A, B, C, or D!");
			break;
		}
	}

	else if (choice == 3) {
		char aa;
		printf("You've chosen addition! Here's your problem: \n10 * 10 = ?\n\n");
		printf("A) 1000\nB) 20\nC)100\nD)0\n\n");
		printf("Please enter your answer: ");
		cin >> aa;
		switch (aa) {
		case 'A':
			cout << "Your answer is false!";
			break;
		case 'B':
			cout << "Your answer is false!";
			break;
		case 'C':
			cout << "Your answer is correct!";
			break;
		case 'D':
			cout << "Your answer is false!";
			break;
		default: printf("Your answer should be either A, B, C, or D!");
			break;
		}
	}

	else if (choice == 4) {
		char aa;
		printf("You've chosen addition! Here's your problem: \n96 / 12 = ?\n\n");
		printf("A) 8\nB) 7\nC) 10\nD) 16\n\n");
		printf("Please enter your answer: ");
		cin >> aa;
		switch (aa) {
		case 'A':
			cout << "Your answer is correct!";
			break;
		case 'B':
			cout << "Your answer is false!";
			break;
		case 'C':
			cout << "Your answer is false!";
			break;
		case 'D':
			cout << "Your answer is false!";
			break;
		default: printf("Your answer should be either A, B, C, or D!");
			break;
		}
	}

	else if (choice == 1) {
		char aa;
		printf("You've chosen addition! Here's your problem: \n10 % 5 = ?\n\n");
		printf("A) 0\nB) 1\nC) 5\nD) 20\n\n");
		printf("Please enter your answer: ");
		cin >> aa;
		switch (aa) {
		case 'A':
			cout << "Your answer is correct!";
			break;
		case 'B':
			cout << "Your answer is false!";
			break;
		case 'C':
			cout << "Your answer is false!";
			break;
		case 'D':
			cout << "Your answer is false!";
			break;
		default: printf("Your answer should be either A, B, C, or D!");
			break;
		}
	}
}