// LectureFour.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "MyClass.h"

using namespace std;



int main()
{
	MyClass test(5,5);
	test.setP(50);
	test.setX(432);
	test.print();

	return 0;
}

