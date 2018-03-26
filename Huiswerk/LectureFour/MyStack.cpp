#include "stdafx.h"
#include "MyStack.h"


struct Block {
	int number;
	Block* next;
};

MyStack::MyStack()
{
	top = NULL;
}


MyStack::~MyStack()
{
}

bool MyStack::isEmpty()
{
	if (top == NULL)
		return true;
	return false;
}

void MyStack::push(int value)
{
	Block *pointer = new Block{ value, top };
	top = pointer;
}

int MyStack::pop()
{
	

	return 0;
}

void MyStack::print()
{
}

int MyStack::size()
{
	Block *p = top;
	int size = 0;

	while (p->next != NULL) {
		size++;
		p = p->next;
	}

	return size;
}

int MyStack::sum()
{
	Block *p = top;
	int sum = 0;

	while (p->next != NULL) {
		sum + p->number;
		p = p->next;
	}

	return sum;
}
