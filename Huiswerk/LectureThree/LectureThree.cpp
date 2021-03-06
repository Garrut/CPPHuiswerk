// LectureThree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void exOne();
int* exTwo(int* &p, int n);

int main()
{
	int *p, q; //P has to be initialized before it can be send
	q = 10;

	exOne();

	//Pointer p is now pointing to new array
	p = exTwo(p, q);
	//Print array
	for (int i = 1; i != q + 1; i++) {
		cout << p[i] << endl;
	}

    return 0;
}

//Pointers and memory allocation
void exOne() {
	//Create pointers
	int *p, *q, *r;

	//Allocate memory by declaring new integers
	p = new int;
	q = new int;

	//Give value
	*p = 2;
	*q = 3;

	cout << *p << "<=P -- Q=>" << *q << endl;

	//Switch
	r = p;
	p = q;
	q = r;

	cout << *p << "<=P -- Q=>" << *q << endl;

	//Free memory
	delete p,q,r;
	//Necessary?
	p, q, r = NULL;
}

//New array from pointer
int* exTwo(int* &p, int n) {
	//p = new integer array with length value N
	p = new int[n];
	for (int i = 0; i < n + 1; ++i) {
		p[i] = i;
	}

	//Return pointer
	return p;
}

