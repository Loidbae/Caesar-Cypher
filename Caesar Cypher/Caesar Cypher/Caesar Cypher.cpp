
/*Guidelines for this project (not sure if those are good ones need feedback on them)

	- If possible find rememberable and short names for your functions;
	- Create a good and readable structure if it works, keep it, if not change it.
	- Member Variables of another class should be named after the act of getting / using something from that class;
	- Documentation should be simply worded and in short sentences. if possible (clean and simple);

*/// Code written by Loidbae, Github:https://github.com/Loidbae

#include "pch.h"
#include <iostream>
#include <string>
#include "Input Handler.h"

using namespace std;

int main()
{

	//--Class Member Zone--//
	string txtinput,keyinput;
	inputhandler execute;
	//---------------------//
	
	int boot;

	cout << "1 - Encrypt" << endl;
	cout << "2 - Decrypt" << endl;
	cout << "3 -  Quit" << endl;
	do
	{
		cin >> boot;

		if (boot > 3)
		{
			cout << "Illegal input" << endl;
		}

	} while (boot > 3);
	
	
	switch (boot)
	{

	case 1:

		cin.ignore();

		//--Assignment Zone--//
		int abcproxy;
		//-------------------//
		
		//gets the users input as string
		cout << "Enter text to encode (max 15 characters whitespaces excluded)" << endl;
		getline(cin, txtinput);

		// removes whitespaces
		execute.prepare_brokeninput(txtinput,keyinput,false);

		//gets offsets
		cout << "Offset every character" << endl;
		for (int i = 0; i < execute.get_inputsL(); i++)
		{
			cout << execute.get_brokeninput(i) << " by ";
			cin >> abcproxy;
			execute.set_offsets(abcproxy, i);
		}

		// bad don't know why
		system("cls");

		//encrypts users input
		execute.encrypter159();

		cout << "Your Text: " << endl;
		for (int i = 0; i < execute.get_inputsL(); i++)
		{
			cout << execute.get_brokeninput(i);
		}

		cout << endl;

		//generates key for decrypting later on, not happy with the lenght of the key (soon)
		execute.keygen159();

		cout << "Your Decryption Key: ";
		for (int i = 0; i <= execute.keysize ; i++)
		{
			cout << execute.get_key(i);
			if (i != execute.keysize)
			{
				cout<< "-";
			}
		}

		cout << endl;
		break;

	case 2:
		cin.ignore();
		txtinput.clear();
		execute.clearArrays();

		char keyproxy;

		cout << "enter your encrypted text here" << endl;
		getline(cin, txtinput);

		for (int i = 0; i < execute.get_inputsL(); i++)
		{
			execute.set_brokeninput(txtinput,i);
		}

		cout << "now enter your decryption-key without '-' " << endl;
		while (keyproxy != 126)
		{// input problem
			
			cin >> keyproxy;
			execute.set_newkey(keyproxy,i);
		}

		execute.prepare_brokeninput(txtinput, keyinput, true);
		execute.decryption159();
		break;




	default:
		break;
	}
}

/*
	_______[what I had to reuse and/or relearn]_______

	- Classes and class members and their  variables
	- Constructor
	- String
	- I/O
	- Const
	- Reference but only &
	- Struct
	- Getter setter
	- Arrays
	- Static constexpr
	-

	_____________[What I want to do/learn]_____________

	- File reading / writing
	- Reference *
	- Classes inside classes (if necessary/possible)
	- 2D arrays
	- What function to use as a tool /formular functions I call these
	-

*/

/*
------------[To-Do's]------------

	- complete keygen and decrypter

*/

/*

Bug list
------------------











*/
