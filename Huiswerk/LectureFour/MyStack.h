#pragma once
#ifndef MY_STACK_HEADER
#define MY_STACK_HEADER

class MyStack
{
public:
	MyStack();
	~MyStack();
	
	bool isEmpty();
	void push(int value);
	int pop();
	void print();
	int size();
	int sum();

private:
	Block* top;
};

#endif