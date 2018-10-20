	/*Guidelines for this project (not sure if those are good ones need feedback on that)

		- If possible find rememberable and short names for your functions;
		- Don't spam your main() with output loops;
		- Always try to keep main() clean;
		- Documentation should be simply worded in short sentences, if possible;

	*/
	// Code written by Loidbae, Github:https://github.com/Loidbae

#include "pch.h"
#include <iostream>
#include <string>
#include "string.h"
#include "String_Processor.h"
#include "Coder.h"
#include "Windows.h"

using namespace std;

int main()
{
	//--Member variables call zone--//
	string input;
	string_processor call;
	Coder run;
	//------------------------------//

	//--Assigning zone--//
	static constexpr int index = 40;
	int abcproxy;
	//------------------//
	

	//user string input
	cout << "Enter text to encode (max 40 characters whitespaces included)" << endl;
	getline(cin, input);

	//offset values input
	cout << "Offset every character" << endl;
	for (int i = 0; i < (int)input.length(); i++)
	{
		cout << call.input_processor(input, i) << " by ";
		cin >> abcproxy;
		run.set_abc(abcproxy, i);
	}
	system("cls");

	cout << "Your Decryption Key: ";
	run.keygen159();
	cout << endl;

	
	cout << "Your Text: " << endl;

	//this function actually does all the work, but gets zero attention for it :( poop guy
	for (int i = 0; i < (int)input.length(); i++)
	{
		cout << run.encoder159(input, call, i);
	}
}

/*
Bug list
------------------

- too much input throws an exception in Code.cpp at line 51;

- the user can actually input whatever they want, where ever they want;














*/
