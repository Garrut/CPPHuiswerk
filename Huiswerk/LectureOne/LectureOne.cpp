// LectureOne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <cmath>0

using namespace std;


int sumOfIntegers(int x, int y);
int count_negatives(double uArray[], int size);
int recursiveExp(int base, int exp);
int findValueInArray(int integerArray[], int arrayLength ,int value);
void isEven(int i);
void isPrimeNumber(int i);
void bubbleSortArray(int integerArray[], int arrayLength);
int greatestCommonDivisor(int i, int j);
double leastCommonMultiple(int i, int j);


int main()
{
	
	//Some variables to use
	const int INT = 5;
	int INTARRAY[INT];

	for (int i = 0; i < INT; i++) {
		INTARRAY[i] = rand() % 100 + 1;
	}

	//1
	cout << INT << "+" << INT << "=" << sumOfIntegers(INT, INT) << endl;

	//2
	cout << INT << " is ";
	isEven(INT);

	//3
	cout << "EXP: " << recursiveExp(INT, INT) << endl;

	//4
	isPrimeNumber(INT);

	//5
	cout << INT << " on index: " << findValueInArray(INTARRAY, INT, INT) << endl;

	//6
	bubbleSortArray(INTARRAY, INT);

	//7
	cout << greatestCommonDivisor(INT, INT * INT + INT) << endl;

	//8
	cout << leastCommonMultiple(INT * INT, INT) << endl;
	
	return 0;
	
}


double leastCommonMultiple(int i, int j) {
	int GCD = greatestCommonDivisor(i, j);

	return ((i * j) / GCD);
}

int greatestCommonDivisor(int i, int j) {
	int BIG = i > j ? i : j;
	int SMALL = i < j ? i : j;
	int REM = -1;

	do
	{
		REM = BIG % SMALL;
		BIG = SMALL;
		SMALL = REM;
	} while (REM != 0);

	return BIG;
}

void bubbleSortArray(int integerArray[], int arrayLength) {
	//Print array before
	cout << "Before: ";
	for (int i = 0; i < arrayLength; ++i) {
		cout << integerArray[i] << " ";
	}
	cout << endl;
	
	//Sort array
	for (int i = 1; i<arrayLength; ++i)
	{
		for (int j = 0; j<(arrayLength - i); ++j)
			if (integerArray[j]>integerArray[j + 1])
			{
				int temp = integerArray[j];
				integerArray[j] = integerArray[j + 1];
				integerArray[j + 1] = temp;
			}
	}

	//Print array after
	cout << "After: ";
	for (int i = 0; i < arrayLength; ++i) {
		cout << integerArray[i] << " ";
	}
	cout << endl;
}

int findValueInArray(int integerArray[], int arrayLength, int value) {
	for (int i = 0; i < arrayLength; i++) {
		if (integerArray[i] == value) {
			return i;
		}
	}

	return -1;
}

void isEven(int i) {
	if (i % 2 == 0) {
		cout << "Even" << endl;
	}
	else {
		cout << "Uneven" << endl;
	}
}

int sumOfIntegers(int x, int y) {
	return x + y;
}

int count_negatives(double uArray[], int size) {
	int result = 0;

	for (int i = 0; i < size; i++) {
		if (uArray[i] < 0) {
			result++;
		}
	}

	return result;
}

int recursiveExp(int base, int exp) {
	if (exp == 1) {
		return base;
	}
	else if (exp == 0) {
		return 1;
	}

	return base * recursiveExp(base, --exp);
}

void isPrimeNumber(int num) {
	double sqr = ceil(sqrt(num));

	for (int i = 2; i <= sqr; ++i) {
		if (num % i == 0) {
			cout << num << " is no prime number" << endl;
			return;
		}
	}

	cout << num << " is a prime number" << endl;
}
