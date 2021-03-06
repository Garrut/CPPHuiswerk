// Galgje.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

const int MAXLENGTH = 8;
const int MAXATTEMPTS = 10;
char str[MAXLENGTH], guessed[MAXLENGTH];

void setGalgje(char* out) {
	cout << "Voeg een woord toe van " << MAXLENGTH << " letters" << endl;
	cin.getline(out, MAXLENGTH);
	
	cout << "Het woord is: " << str << endl;
}

void guessGalgje(int attempt, char* str, char* guessed) {
	if (attempt > MAXATTEMPTS) {
		cout << "You Lost!" << endl;
		return;
	}

	if (strcmp(str, guessed) == 0) {
		cout << "You won!" << endl;
		return;
	}

	//Wanneer meerdere letters worden meegegeven worden meerdere attempts gedaan...
	cout << "Poging: " << attempt << endl;
	
	char letter;
	cin >> letter;
	bool match = false;

	//Check if match
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == letter) {
			match = true;
			guessed[i] = letter;
		}
	}

	//If no match attempt++
	cout << guessed << endl;

	if (!match) {
		attempt++;
	}

	guessGalgje(attempt, str, guessed);
}

int main()
{
	setGalgje(str);
	for (int i = 0; i < strlen(str); i++) {
		guessed[i] = '.';
	}
	guessGalgje(1, str, guessed);
	
	return 0;
}

