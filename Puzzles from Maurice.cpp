// Puzzles from Maurice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Windows.h"
#include <vector>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
	int in = 0;
	vector<int> numbers;
	ifstream text_in;
	fstream text_out;
	int temp;
	text_in.open("List.txt");
	if (text_in.is_open())
	{
		do
		{
			text_in >> temp;
			text_in.ignore(INT_MAX, '\n');
			in = in + temp;
			if (text_in.eof())
			{
				break;
			}
		} while (true);
		text_in.close();
	}
	else
		cout << "File is already open" << endl;
	cout << in;
	cin.clear();
	cin.ignore(INT16_MAX, '\n');
	//take in all numbers

	//return the value
    return 0;
	
}

