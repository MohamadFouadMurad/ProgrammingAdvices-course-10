#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

namespace String
{

	string ReadString()
	{
		string S1;
		cout << "Please Enter Your String?\n";
		getline(cin >> ws, S1);
		return S1;
	}

	void LowerFirstLettFromEachWord(string Name)
	{
		cout << endl;

		int isFirstLetter = true;

		cout << "String After Conversion: " << endl;

		for (int i = 0; i < Name.length(); i++)
		{
			if (Name[i] != ' ' && isFirstLetter)
			{
				Name[i] = tolower(Name[i]);
			}

			isFirstLetter = (Name[i] == ' ' ? true : false);
		}

		cout << Name << endl;
	}

	void UpperFirstLettFromEachWord(string Name)
	{
		cout << endl;

		int isFirstLetter = true;

		cout << "String After Conversion: " << endl;

		for (int i = 0; i < Name.length(); i++)
		{
			if (Name[i] != ' ' && isFirstLetter)
			{
				Name[i] = toupper(Name[i]);
			}

			isFirstLetter = (Name[i] == ' ' ? true : false);
		}

		cout << Name << endl;
	}

	void LowerAllString(string Name)
	{
		for (int i = 0; i < Name.length(); i++)
		{
			if (Name[i] != ' ')
			{
				Name[i] = tolower(Name[i]);
			}
		}

		cout << Name << endl;
	}

	void UpperAllString(string Name)
	{

		for (int i = 0; i < Name.length(); i++)
		{
			if (Name[i] != ' ')
			{
				Name[i] = toupper(Name[i]);
			}
		}

		cout << Name << endl;
	}

	char InvertLetterCase(char Char1)
	{
		return isupper(Char1) ? tolower(Char1) : toupper(Char1);
	}

	int CountCapitalLetters(string S1)
	{

		int count = 0;

		for (int i = 0; i < S1.length(); i++)
		{
			if (isupper(S1[i]))
			{
				count++;
			}
		}

		return count;
	}

	int CountSmallLetters(string S1)
	{
		int count = 0;

		for (int i = 0; i < S1.length(); i++)
		{
			if (islower(S1[i]))
			{
				count++;
			}
		}

		return count;
	}

	vector <string> SplitString(string S1, string Delim)
	{
		vector <string> vString;

		short pos = 0;
		string sWord;

		while ((pos = S1.find(Delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);

			if (sWord != "")
			{
				vString.push_back(sWord);
			}

			S1.erase(0, pos + Delim.length());
		}

		if (S1 != "")
		{
			vString.push_back(S1); // it adds last word of the string.
		}

		return vString;
	}

	string JoinString(vector <string>& vString, string delim)
	{
		string S1 = "";

		for (string& word : vString)
		{
			if (!S1.empty())
			{
				S1 += delim;
			}
			S1 += word;
		}

		return S1;
	}

	string RemovePunctuationsFromString(string S1)
	{
		string S2 = "";

		for (int i = 0; i < S1.length(); i++)
		{
			if (!ispunct(S1[i]))
			{
				S2 += S1[i];
			}
		}

		return S2;
	}

}