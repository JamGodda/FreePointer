// Pointing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" //standard library
#include <iostream> // input output stream
#include <string> // string library

using namespace std; 

void Playername(); // function 1
void Playernumber(); // function 2

string name = ""; // variable 
string* namePtr = &name; // pointer

int fp = 0; // variable
int* fpPtr = &fp; // pointer

int fun = 0; // variable for quitting

int main() // main function
{
	cout << "Wanna do something fun? " << endl; // output text
	cout << "Press 1 for fun or 2 for no fun " << endl; // asks the user if they want to quit
	cin >> fun; // player input
	if (fun == 1)
	{
		Playername(); // runs function playername
		Playernumber(); // runs function playernumber
	}
	else
	{
		cout << "You sure you don't wanna do something fun? " << endl; // annoys the player
		cout << "Press 1 for fun or 2 for no fun " << endl; // asks the user if they want to quit
		cin >> fun; // player input
		if (fun == 1) // check to see if the player hit 1
		{
			Playername(); // runs function playername
			Playernumber(); // runs function playernumber
		}
		else // if they don't hit 1 it goes to this
		{
			cout << "You really sure you don't wanna do something fun? " << endl; // annoys the player
			cout << "Press 1 for fun or 2 for no fun " << endl; // asks the user if they want to quit
			cin >> fun; // player input
			if (fun == 1) // check to see if the player hit 1 
			{
				Playername(); // runs function playername
				Playernumber(); // runs function playernumber
			}
			else // if they don't hit 1 it goes to this
			{
				cout << "You really, really sure you don't wanna do something fun? " << endl; // annoys the player
				cout << "Press 1 for fun or 2 for no fun " << endl; // asks the user if they want to quit
				cin >> fun; // player input
				if (fun == 1) // check to see if the player hit 1
				{
					Playername(); // runs function playername
					Playernumber(); // runs function playernumber
				}
				else // if they don't hit 1 it goes to this
				{ 
					cout << "To bad you have to do something anyway... " << endl; // annoys the player

					Playername(); // runs function playername
					Playernumber(); // runs function playernumber
				}
			}
		}




	}
	
	system("pause"); // pauses the system so the player can read the final text
		
    return 0;
}

void Playername() // function
{
	cout << "Please Enter your name: "; // asks player for name
	cin >> name; // player input name
	cout << "Nice to meet you, " << name << endl; // output player name
	cout << "This is the origional name: " << name << endl; // output player name
	cout << "This is the pointer name: " << *namePtr << endl; // output player pointer name
	cout << "This is the pointer name memory address: " << namePtr << endl; // output player name pointer memory location
	
	return;
}

void Playernumber() // function
{
	cout << "Please enter a number: "; // asks player for number
	cin >> fp; // player number input
	cout << "Really you chose " << fp << " why would you choose such a boring number." << endl; // output player number
	cout << "This is the origional number: " << fp << endl; // output player number
	cout << "This is the pointer number: " << *fpPtr << endl; // output player number pointer number
	cout << "This is the pointer number memory address: " << fpPtr << endl; // output player number pointer memory location

	return;
}

