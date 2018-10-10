
#include "pch.h"
#include <iostream>
#include <string>
#include "string.h"
#include "String_Processor.h"
#include "Coder.h"

using namespace std;

int main()
{
	string input;
	String_processor start;
	Coder process;
	int abcproxy;


	cout << "Enter text to encode (max 40 characters whitespaces included)"<< endl;
	
	//user input
	getline(cin,input);

	//alphabet offset array input
	cout << "Now enter for every letter how many times it should get offset in the alphabet" << endl;
	cin >> abcproxy;
	process.set_abc(abcproxy);
	abcproxy = 0;

	//whitespace remover
	start.wsp_remover(input);

	//converts string to char
	start.string_convert(input);


	





	//String output but as char array
	for (int i = 0; i < input.length(); i++)
	{
		cout << start.get_char_array(i);
	}
	
}

