
#include "pch.h"
#include <iostream>
#include "iostream"
#include <string>
#include "string.h"
#include "String_Processor.h"
#include "Coder.h"

using namespace std;

int main()
{
	//--Member variables call zone--
	string input;
	String_processor call;
	Coder process;
	//------------------------------

	//--Assign zone--
	int abcproxy;


	//---------------

	cout << "Enter text to encode (max 40 characters whitespaces included)"<< endl;

	//Input processing method, input,whitespace remover, string to char conversion
	call.input_setup();

	//alphabet offset array input
	cout << "Now enter for every character how many times it should get offset in the alphabet" << endl;
	// we need a for loop here to read the input of the abc offset array
	cin >> abcproxy;
	process.set_abc(abcproxy); // this is normally an array so here belongs a for loop 
	abcproxy = 0;



	//for keeping it pretty IGNORE ME
	cout<<endl;


	//test
	char a = 'a';
	cout << a << endl;
	a = 98;
	cout << a << endl;
	//success as I thought giving the char a a decimal number of a character in the ascii table
	//it will display that character.

	/*So that means my encode should look something like this:
	new int array then get values of brokenstring array which means it will convert
	to decimals of the ascii table then through the offset input I will add those values
	on top of each other if one number exeeds beyond the ascii table numbers
	then I have to wrap around and let it start from the second position of the ascii table
	because the first would be a whitespace*/


	//String output but as char array
	for (int i = 0; i < (int)call.get_input().length(); i++)
	{
		cout << call.get_char_array(i);
		//cout << process.get_ascii() << endl;
	}
	
}

