#include "LectureDLL.h"

#include "stdafx.h"
#include <string>
#include <cmath>
#include <iostream>

#define MAXMODULE 50

char module[MAXMODULE];

using namespace std;

extern "C" __declspec(dllexport)

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

extern "C" __declspec(dllexport)

void bubbleSortArray(int integerArray[], int arrayLength) {
	cout << "Before: ";
	for (int i = 0; i < arrayLength; ++i) {
		cout << integerArray[i] << " ";
	}
	cout << endl;

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

	cout << "After: ";
	for (int i = 0; i < arrayLength; ++i) {
		cout << integerArray[i] << " ";
	}
	cout << endl;
}

extern "C" __declspec(dllexport)

int findValueInArray(int integerArray[], int arrayLength, int value) {
	for (int i = 0; i < arrayLength; i++) {
		if (integerArray[i] == value) {
			return i;
		}
	}

	return -1;
}

extern "C" __declspec(dllexport)

void isEven(int i) {
	if (i % 2 == 0) {
		cout << "Even" << endl;
	}
	else {
		cout << "Uneven" << endl;
	}
}

extern "C" __declspec(dllexport)

int sumOfIntegers(int x, int y) {
	return x + y;
}

extern "C" __declspec(dllexport)

int count_negatives(double uArray[], int size) {
	int result = 0;

	for (int i = 0; i < size; i++) {
		if (uArray[i] < 0) {
			result++;
		}
	}

	return result;
}

extern "C" __declspec(dllexport)

int recursiveExp(int base, int exp) {
	if (exp == 1) {
		return base;
	}
	else if (exp == 0) {
		return 1;
	}

	return base * recursiveExp(base, --exp);
}

extern "C" __declspec(dllexport)

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

extern "C" __declspec(dllexport)

double leastCommonMultiple(int i, int j) {
	int GCD = greatestCommonDivisor(i, j);

	return ((i * j) / GCD);
}





