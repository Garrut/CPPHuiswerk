// TestEnvoCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;



int main()
{

	/*
	#pragma region 1

		char names[5][5] = { {'D', 'E', 'R', 'E', 'K'}, {'M', 'O', 'N', 'K', 'E'} };

		char happyArray[6] = { 'H','A','P','P','Y','\0' };
		string birthday = " Birthday";

		cout << happyArray + birthday << endl;

		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 5; k++) {
				cout << names[j][k];
			}
		}

		int random = (rand() % 100) + 1;

		while (random != 50) {
			cout << " " << random;
			random = (rand() % 100) + 1;
		}

		cout << endl;

		string yourName;
		cout << "What is your name ";
		getline(cin, yourName);

		cout << "Hello " << yourName << endl;
		double eulersConstant = .57721;
		string eulerGuess;
		double eulerGuessDouble;
		cout << "What's eulers constant? ";
		getline(cin, eulerGuess);
		eulerGuessDouble = stod(eulerGuess);
		if (eulerGuessDouble == eulersConstant) {
			cout << "You're right!" << endl;
		}
		else {
			cout << "You're wrong!" << endl;
		}

		cout << "Size of string: " << eulerGuess.size() << endl;
		cout << "Is string empty: " << eulerGuess.empty() << endl;
		cout << eulerGuess.append(" was your guess") << endl;

	#pragma endregion
	*/

	/*
	string yName;
	cout << "What's your name ";
	getline(cin, yName);

	cout << "Hello " << yName << endl;

	string dogString = "dog";
	string catString = "cat";

	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;

	string wholeName = yName.assign(yName);
	string firstName = wholeName.assign(wholeName, 0, 5);
	cout << wholeName << endl;

	int lastNameIndex = yName.find("Gar", 0);

	cout << "GarDex: " << lastNameIndex << endl;

	yName.insert(5, "WOO");
	cout << yName << endl;

	yName.erase(6, 3);
	cout << yName << endl;
	*/

	/*
	string steveQuote = "A Day without sunshine is like night";

	ofstream writer("stevequote.txt");

	if (!writer) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer << steveQuote << endl;
		writer.close();
	}

	ofstream writer2("stevequote.txt", ios::app);

	if (!writer2) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer2 << "\n -Steve Martin" << endl;
		writer2.close();
	}

	char letter;
	ifstream reader("stevequote.txt");

	if (!reader) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		for (int i = 0; !reader.eof(); i++) {
			reader.get(letter);
			cout << letter;
		}

		cout << endl;
		reader.close();
	}
	*/



	return 0;
}

