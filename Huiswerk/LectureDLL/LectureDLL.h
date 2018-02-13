#pragma once

#ifndef _LectureDLL_H_
#define _LectureDLL_H_

#include <stdio.h>
#include <windows.h>

extern "C" __declspec(dllexport) int sumOfIntegers(int x, int y);
extern "C" __declspec(dllexport) int count_negatives(double uArray[], int size);
extern "C" __declspec(dllexport) int recursiveExp(int base, int exp);
extern "C" __declspec(dllexport) int findValueInArray(int integerArray[], int arrayLength, int value);
extern "C" __declspec(dllexport) void isEven(int i);
extern "C" __declspec(dllexport) void isPrimeNumber(int i);
extern "C" __declspec(dllexport) void bubbleSortArray(int integerArray[], int arrayLength);
extern "C" __declspec(dllexport) int greatestCommonDivisor(int i, int j);
extern "C" __declspec(dllexport) double leastCommonMultiple(int i, int j);

#endif