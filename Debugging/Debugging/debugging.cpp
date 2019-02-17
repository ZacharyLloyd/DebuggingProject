//This allows for input and output
#include <iostream>
//This allows for strings to be used
#include <string>
//This allows me to no initialize std everytime I use it
using namespace std;

//Main function
int main()
{
	string textToAnalyze; //Initializing the input the person using the program puts in to be read later on
	int foo = 0; //This is unneeded adds extra processing
	int vowels = 0; //Starting value for number of vowels
	int consonants = 0; //Starting value for number of consonants
	int digits = 0; //Starting value for number of digits
	int spaces = 0; //Starting value for number of spaces
	int lengthOfStringSubmittedForAnalysis = 0; //Starting value for length of the string to ensure it is valid
	int unknownCharacters = 0; //Starting value for number of unknown characters the program has received
	int checkSum = 0; //Starting sum for all of the characters used
	int bar = 0; //This is unneeded adds extra processing

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);
	//Loop to cycle through the input received from the person using the program
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels; //This was a bug was '--' needed to be '++' to add to the number of vowels
		}
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			++consonants; //This was a bug, it was a comment, it was not adding value to consonants
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits; //Adding to the number of digits
		}
		else if (textToAnalyze[i] == ' ')
		{
			++spaces; // Adding to the number of spaces
		}
		else
		{
			++unknownCharacters; // aadding to the number of unknown characters
		}
	}
	//Getting the whole length of the input given from the person using the program and making sure it's valid
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}