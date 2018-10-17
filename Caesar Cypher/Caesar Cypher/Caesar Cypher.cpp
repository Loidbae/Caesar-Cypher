	/*so it turns out that if you convert a character to an integer, it will actually convert to
	the ascii table decimal number of that character. Yes this is pretty basic stuff and common
	knowlage, but a step is a step.*/

	/*So that means my encoder should look something like this:
	new int array -then-> get [values of brokenstring array] which means very character will get
	translated !@#? --> into their decimal assigned by the ascii table respectively.

	After I did that we want to change each and every character by an offset put in by the user
	so my idea would be putting current character decimals and offsets together so that we have the new
	decimals after the offset

	for example:

				char ex = 'a'
				// a is 97
				int offset = 1;
				int new_char;

				new_char=offset+(int)ex;

				cout << new_char;
				output would be 'b' because 97 + 1 = 98 = 'b' in the table
	*/
// Code written by Loidbae, Github:https://github.com/Loidbae

#include "pch.h"
#include <iostream>
#include <string>
#include "string.h"
#include "String_Processor.h"
#include "Coder.h"

using namespace std;

int main()
{
	//--Member variables call zone--//
	string input;
	string_processor call;
	Coder run;
	//------------------------------//

	//--Assign zone--//
	int abcproxy;

	//---------------//


	//user string input
	cout << "Enter text to encode (max 40 characters whitespaces included)"<< endl;
	getline(cin, input);

	//offset values input
	cout << "Offset every character" << endl;
	for (int i = 0; i < (int)input.length(); i++)
	{
		cout << call.input_processor(input, i) << " by ";
		cin >> abcproxy;
		run.set_abc(abcproxy,i);
	}

	//this method actually does all the work, but gets zero recognition for it :( poop guy
	run.encode(input, call);

	//just returns the encoded characters one by one.
	for (int i = 0; i < (int)input.length(); i++)
	{
		cout << run.return_encode(i);
	}
	
	cout << endl;
}

