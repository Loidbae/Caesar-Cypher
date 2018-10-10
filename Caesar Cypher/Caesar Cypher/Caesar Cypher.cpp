
// Caesar Cypher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "string.h"
#include "String_Processor.h"

using namespace std;

int main()
{
	string input;
	String_processor start;


	cout << "Enter text to encode (max 40 characters)"<< endl;
	
	//user input
	getline(cin,input);

	//whitespace remover
	start.wsp_remover(input);

	//converts string to char
	start.string_convert(input);


	





	//checking the char array
	for (int i = 0; i < input.length(); i++)
	{
		cout << start.get_char_array(i);
	}
	
}

