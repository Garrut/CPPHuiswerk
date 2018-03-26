#include "stdafx.h"
#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::MyClass()
{
	p = NULL;
	x = 0;
}	

MyClass::MyClass(int a) {
	x = a;
	p = NULL;
};

MyClass::MyClass(int a, int b) {
	p = NULL;
	x = a;
	setP(b);
}

MyClass::~MyClass()
{
	delete p;
}

void MyClass::setX(int i) {
	this->x = i;
}

void MyClass::setP(int i) {
	if (p == NULL)
		p = new int;

	*p = i;
}

void MyClass::clearP() {
	//Clear value p points at
	if (p != NULL) {
		delete p;
		p = NULL;
	}
}

void MyClass::print() {
	cout << "Value of P:" << *p << endl;
	cout << "Value of X:" << x << endl;
}