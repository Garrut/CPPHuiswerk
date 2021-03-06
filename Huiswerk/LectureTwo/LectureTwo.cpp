// LectureTwo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LectureDLL.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int foo = 5;
const int bar = 20;

ofstream outputFile;
ifstream inputFile;


struct PlayerState {
	char name[20];
	int level;
	double health;
	int experience;
};

void readTxtFileToConsole() {

}

string simplifyFraction(int num, int den) {
	int divisor = greatestCommonDivisor(num, den);
	string result = "Vereenvoudigde breuk: " + to_string(num / divisor) + "/" + to_string(den / divisor);

	return result;
}

bool isPalinDrome(char word[]) {
	int length = strlen(word);

	for (int i = 0; i < length; i++) {
		if (word[i] != word[length - 1 - i]) {
			return false;
		}
	}

	return true;
}

void printCharArray() {

	char names[5][20] =
	{
		"Henk",
		"Garrut",
		"Pieter",
		"Klaas",
		"Jan",
	};

	int i = 0;

	for (; i < 5; i++) {
		cout << names[i] << endl;
	}

}

void saveToFile() {
	PlayerState players[3] =
	{
		{ "Johnny" , 20, 0.6, 2500 },
		{ "Geo" , 10, 0.8, 1250 },
		{ "Maoz" , 40, 1.0 , 5000 },
	};

	outputFile.open("game.dat", ios::binary);
	outputFile.write((char*)&players, sizeof(players));
	outputFile.close();
}

void saveToTxtFromDat() {
	PlayerState player;

	inputFile.open("game.dat", ios::binary);
	inputFile.read((char*)&player, sizeof(player));

	outputFile.open("game.txt");
	while (!inputFile.eof()) {
		outputFile << player.name << endl;
		inputFile.read((char*)&player, sizeof(PlayerState));
	}
	outputFile.close();
}

void openFromFile() {
	string STRING;
	ifstream infile;
	infile.open("game.txt");
	while (!infile.eof()) // To get you all the lines.
	{
		getline(infile, STRING); // Saves the line in STRING.
		cout << STRING << endl; // Prints our STRING.
	}
	infile.close();
}

int main()
{
	cout << "Optelsom: " << sumOfIntegers(foo, bar) << endl;
	cout << simplifyFraction(foo, bar) << endl;
	printCharArray();

	char woord[20] = { "racecar" };

	if (isPalinDrome(woord)) {
		cout << woord << " " << "is een palindroom\n" << endl;
	}
	else {
		cout << woord << " " << "is geen palindroom\n" << endl;
	}

	saveToFile();
	saveToTxtFromDat();
	openFromFile();

	return 0;
}

