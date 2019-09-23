// GradeCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
	float numGrade;
	char letterGrade;

	if (numGrade >= 90) {
		letterGrade = 'A';
	}
	else if (numGrade > 80 && numGrade < 90){
		letterGrade = 'B';
	}
	else if (numGrade > 70 && numGrade < 80) {
		letterGrade = 'C';
	}
	else if (numGrade > 60 && numGrade < 70) {
		letterGrade = 'D';
	}	else if (numGrade > 80 && numGrade < 90){
		letterGrade = 'B';
	}
	else {
		letterGrade = 'F';
	}

	if (numGrade > 100) {
		letterGrade = 'A+';
	}
}
