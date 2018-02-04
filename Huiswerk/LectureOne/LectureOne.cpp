// LectureOne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int sumOfIntegers(int x, int y);
int count_negatives(double uArray[], int size);
int recursiveExp(int base, int exp);
int findValueInArray(int integerArray[], int arrayLength ,int value);
void isEven(int i);
string isPrimeNumber(int i);

int main()
{
	//Some variables to use
	const int INT = 5;
	const int INTARRAY[INT] = { 5,6,2,5,0 };

	//1
	cout << sumOfIntegers(INT, INT) << endl;

	//2
	isEven(INT);

	//3
	cout << recursiveExp(INT, INT) << endl;

	//4
	cout << isPrimeNumber(INT) << endl;

	//5
	cout << findValueInArray(INTARRAY, INT, INT) << endl;

	//6


	return 0;
}

void bubbleSortArray(int integerArray[], int arrayLength) {
	
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

string isPrimeNumber(int i) {
	int sqr = ceil(sqrt(num));

	for (int i = 2; i <= sqr; ++i) {
		if (num % i == 0) {
			return i + " is no prime";
		}
	}

	return i + " is prime";
}