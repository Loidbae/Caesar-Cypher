
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
	string input;
	String_processor call;
	Coder process;
	int abcproxy;


	cout << "Enter text to encode (max 40 characters whitespaces included)"<< endl;
	
	call.input_setup();

	//user input
    //getline(cin,input);

	//alphabet offset array input
	cout << "Now enter for every letter how many times it should get offset in the alphabet" << endl;
	cin >> abcproxy;
	process.set_abc(abcproxy);
	abcproxy = 0;

	////whitespace remover
	//start.wsp_remover(input);

	////converts string to char
	//start.string_convert(input);




	cout<<endl;


	


	//String output but as char array
	for (int i = 0; i < (int)call.get_input().length(); i++)
	{
		cout << call.get_char_array(i);
		//cout << process.get_ascii() << endl;
	}
	
}

