#include <iostream> //For files
#include <cctype> //For character handling
#include <string>
#include "User.h" //For User class
#include "HighScoreManager.h"

using namespace std;

//COMP 2006 - C++ Assignment 2
//Neil MacKenzie (Monday section) / Nick Kuznecov (Tuesday section)

int displayMainMenu();
void displayChoice(string&);

int main(){

	int userResp = 1;
	string optionTitle; //test test test test

	while (userResp == 1 || userResp == 2)
	{
		system("CLS");

		userResp = displayMainMenu();

		system("CLS");

		//user validation
		while (userResp != 1 && userResp != 2)
		{
			cout << "Please choose 1 or 2" << endl;
			userResp = displayMainMenu();

			system("CLS");
		}

		if (userResp == 1)
		{
			optionTitle = "view the User Information Section";
			displayChoice(optionTitle);

			//User class functions
			cout << "User information Section" << endl;
			cout << "1. Login/Create new user" << endl;
			cout << "2. Update/edit user" << endl;
			cout << "3. Delete user" << endl;
			cout << "4. Set high score" << endl;
			cin >> userResp;
			//User validation
			while (userResp < 1 || userResp > 4){
				cout << "Please choose a number between 1-4" << endl;
				cin >> userResp;
			}
			//User confirmation
			cout << "You have chosen " << userResp << endl;

			//Calls to user functions
			if (userResp == 1)
			{

			}
			else if (userResp == 2)
			{
				//Updateuserlist
			}
			else if (userResp == 3)
			{
				//delete user
			}
			else if (userResp == 4)
			{
				//setHighScore
			}
		}
		if (userResp == 2)
		{
			optionTitle = "view the High Score Manager";
			displayChoice(optionTitle);
			//User class functions
			cout << "High Score Manager" << endl;
			cout << "------------------" << endl;
			cout << "1. Create high score" << endl;
			cout << "2. Update high score" << endl;
			cout << "3. Print high score" << endl;
			cin >> userResp;
		}
		while (userResp < 1 || userResp > 3){
			cout << "Please choose a number between 1-3" << endl;
			cin >> userResp;
		}
		//User confirmation
		cout << "You have chosen " << userResp << endl;

		if (userResp == 1)
		{
			//	HighScoreManager HighScore;
			//		HighScore.createHighScore();
		}
		else if (userResp == 2)
		{
			//Updateuserlist
		}
		else if (userResp == 3)
		{
			//delete user
		}

	}

	system("PAUSE");
	return 0;
};

int displayMainMenu()
{
	int userResp;

	cout << "Welcome to the High Score Keeper App" << endl;
	cout << "1. Do you want to create, view or edit user information?" << endl;
	cout << "2. Do you want to view or edit the High score?" << endl;
	cin >> userResp;
	cout << endl;

	return userResp;
}

void displayChoice(string& option)
{
	cout << "You have chosen to " << option << endl << endl;
}