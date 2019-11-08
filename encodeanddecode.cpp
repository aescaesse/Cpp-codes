#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>
#include <sstream>

using namespace std;

int main()
{
	ifstream ToRead;
	string AfterDecode = "";
	char ToEncode[255];
	ToRead.open("text.txt");
	if (ToRead.good())
	{
		while (!ToRead.eof())
		{
			int character = 0;
			ToRead >> character;
			char _str = character;
			AfterDecode += _str;
		}
		cout << "+----- DECODED MESSAGE -----+\n";
		cout << AfterDecode;
	}
	else
	{
		ofstream FileToEncode;
		FileToEncode.open("text.txt");
		cout << "Text to encode: ";
		cin.getline(ToEncode, 255);
		int i = 0;
		while (ToEncode[i] != '\0')
		{
			int character = 0; 
			character = (int)ToEncode[i];
			FileToEncode << character << " ";
			i++;

		}
		cout << "+----- ENCODED -----+\n";
	}
	return 0;
}


