/*
* By: Naszir Merritt 
* Debug assignment 
* 10/20/2020
CodeHunter.cpp : Defines the entry point for the console application.
#include "pch.h" This line only needed for console C++ project, omit this for Empty C++ Project.
*/
#include <iostream>
#include <string>

using namespace std;


int main()
{// declared variables 
	string textToAnalyze;
	int foo = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	//int bar = 0; not needed 

	cout << "Welcome to the CIA code Hunter Program!" << endl; 
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);// user input 

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U') // vowel condition
		{
			++vowels; // Changed to give vowel count 
		}
		else if (textToAnalyze[i] == 'b' || textToAnalyze[i] == 'c' || textToAnalyze[i] == 'd' ||
			textToAnalyze[i] == 'f' || textToAnalyze[i] == 'g' || textToAnalyze[i] == 'h' ||
			textToAnalyze[i] == 'j' || textToAnalyze[i] == 'k' || textToAnalyze[i] == 'l' ||
			textToAnalyze[i] == 'm' || textToAnalyze[i] == 'n' || textToAnalyze[i] == 'p' || textToAnalyze[i] == 'q' ||
			textToAnalyze[i] == 'r' || textToAnalyze[i] == 's' || textToAnalyze[i] == 't' ||
			textToAnalyze[i] == 'v' || textToAnalyze[i] == 'x' || textToAnalyze[i] == 'z' ||
			textToAnalyze[i] == 'w' ||
			textToAnalyze[i] == 'y' || textToAnalyze[i] == 'B' || textToAnalyze[i] == 'C' || textToAnalyze[i] == 'D' ||
			textToAnalyze[i] == 'F' || textToAnalyze[i] == 'G' || textToAnalyze[i] == 'H' ||
			textToAnalyze[i] == 'J' || textToAnalyze[i] == 'K' || textToAnalyze[i] == 'L' ||
			textToAnalyze[i] == 'M' || textToAnalyze[i] == 'N' || textToAnalyze[i] == 'P' || textToAnalyze[i] == 'Q' ||
			textToAnalyze[i] == 'R' || textToAnalyze[i] == 'S' || textToAnalyze[i] == 'T' ||
			textToAnalyze[i] == 'V' || textToAnalyze[i] == 'X' || textToAnalyze[i] == 'Z' ||
			textToAnalyze[i] == 'W' ||
			textToAnalyze[i] == 'Y') // consonant condition 
			//B, C, D, F, G, H, J, K, L, M, N, P, Q, R, S, T, V, X, Z, and usually W and Y
			// changed to recognize  all 21 consonants 
		{
			++consonants;// incrememts amount of consonants used 
		}
		else if (textToAnalyze[i] == '1' || textToAnalyze[i] == '2' || textToAnalyze[i] == '3' ||
			textToAnalyze[i] == '4' || textToAnalyze[i] == '5' || textToAnalyze[i] == '6' ||
			textToAnalyze[i] == '7' || textToAnalyze[i] == '8' || textToAnalyze[i] == '9' || textToAnalyze[i] == '0')
			// changed to recognize  all numbers 
		{
			++digits;// increments digits
		}
		else if (textToAnalyze[i] == ' ')// space condition
		{
			++spaces;// increments space 
		}
		else
		{
			++unknownCharacters;// increments unknown characters
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length(); // submitted string is the length of textToAnalyze aka user input 
	checkSum = unknownCharacters + vowels + consonants + digits + spaces; // total increments of all variables used for word analysis 

	cout << "Vowels: " << vowels << endl; 
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;
	// stats 

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl; // if every letter is accounted for 
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl; // if there is a unknown character.
	}

	system("pause");

	return 0;
}