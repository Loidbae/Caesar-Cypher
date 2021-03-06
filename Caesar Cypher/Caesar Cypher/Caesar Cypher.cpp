
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
	string txtinput;
	inputhandler execute;

	int boot = 0;

	while (boot != 3)
	{
		system("cls");
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

			int abcproxy;

			//gets the users input as string
			cout << "Enter text to encode (max 15 characters whitespaces excluded)" << endl;
			getline(cin, txtinput);

			// removes whitespaces and passes txtinput values to the 'brokeninput' array.
			execute.prepare_encryption(txtinput);

			//gets the offsets for every character, which is set by the user.
			cout << "Offset every character" << endl;
			for (int i = 0; i < execute.get_input_size(); i++)
			{
				cout << execute.get_brokeninput(i) << " by ";
				cin >> abcproxy;
				execute.set_offsets(abcproxy, i);
			}


			// bad, don't know why
			system("cls");

			//encrypts users input
			execute.encrypter159();

			//Outputs the encrypted text.
			cout << "Your Text: " << endl;
			for (int i = 0; i < execute.get_input_size(); i++)
			{
				cout << execute.get_brokeninput(i);
			}

			cout << endl;

			//generates decryption key
			execute.keygen159();

			//Outputs the generated decryption key
			cout << "Your Decryption Key: ";
			for (int i = 0; i <= execute.get_key_size() - 1; i++) // -1 because I use key_size also as a counter for an array so it has to start at 0
			{
				cout << execute.get_key(i);
				if (i != execute.get_key_size() - 1)
				{
					cout << "-";
				}
			}


			cin.ignore();
			cin.get();
			break;

		case 2:

			//fresh start resetting a buch of values
			cin.ignore();
			txtinput.clear();
			execute.dispose_leftovers();

			int keyproxy = 0;

			//get encrypted text
			cout << "enter your encrypted text here" << endl;
			getline(cin, txtinput);
			for (int i = 0; i < (int)txtinput.length(); i++)
			{
				execute.set_entxt(txtinput, i);
			}

			//gets alien key
			cout << "now enter your decryption-key without '-', end with '404' " << endl;
			for (int i = 0; keyproxy != 404; i++)
			{
				cin >> keyproxy;
				execute.set_keyholder_de(keyproxy, i);
			}

			//processes alien key
			execute.prepare_decryption();

			//processes encrypted text
			execute.decryption159();

			//spits original text back out
			cout << "Your decrypted text" << endl;
			for (int i = 0; i < execute.get_input_size(); i++)
			{
				cout << execute.get_entxt(i);
			}
			cin.ignore();
			cin.get();
			break;
		}
	}
	
}

/*
	_______[what I had to reuse and/or relearn]_______

	- Classes and class members and their variables
	- Constructor
	- String
	- I/O
	- Const
	- Reference but only &
	- Struct
	- Getter, setter
	- Arrays
	- Static constexpr
	- Wrapper

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
