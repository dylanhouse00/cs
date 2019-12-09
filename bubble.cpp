#include <iostream>
#include <conio.h>
using namespace std;

const int NUM_TESTS = 10;
void initializeScores(int[]);
int getScores(int[]);
void printScores(int[], int);
float averageScores(int[], int);
void bubbleSort(int[], int);
void SWAP(int&, int&);

int main(){
	int testScores[NUM_TESTS];
	int numScores = 5;
	float average;

	initializeScores(testScores);
	numScores = getScores(testScores);
	printScores(testScores, numScores);
	average = averageScores(testScores, numScores);
	bubbleSort(testScores, numScores);
	printScores(testScores, numScores);

	_getch();
	return 0;
}


void printScores(int s[], int n){
	system("cls");
	cout << " The scores are:";
	for (int i = 0; i < n; ++i){
		cout << "\n Score " << i + 1 << "  " << s[i];
	}
	_getch();
}

int getScores(int s[]){
	int count = 0;
	//clrscr();
	do{
		cout << " Please enter the number of tests. (Max " << NUM_TESTS << "): ";
		cin >> count;
	} while (count > NUM_TESTS);

	for (int i = 0; i < count; ++i){
		cout << " Enter score " << i + 1 << ": ";
		cin >> s[i];
	}
	return count;
}
void bubbleSort(int list[], int numScores) {
	int a, b;
	for (a = 0; a < numScores - 1; a++) {
		for (b = 0; b < numScores - a - 1; b++) {
			if (list[b] > list[b + 1]) {
				SWAP(list[b], list[b + 1]);
			}
		}
	}
}

void initializeScores(int s[]){
	for (int i = 0; i < NUM_TESTS; ++i)
	{
		s[i] = 0;
	}
}

void SWAP(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

float averageScores(int s[], int a){
	float sum = 0;
	for (int i = 0; i < a; ++i) {
		sum += s[i];
	}
	float result = sum / a;
	return result;
}
