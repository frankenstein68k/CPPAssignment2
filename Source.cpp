#include <iostream> //For files
#include <cctype> //For character handling
#include <string>
#include <fstream>
#include "User.h" //For User class
#include "HighScoreManager.h"

using namespace std;

//COMP 2006 - C++ Assignment 2
//Neil MacKenzie (Monday section) / Nick Kuznecov (Tuesday section)


int main(){

	int userResp = 1;
	char loginResp;

	//Creates a user
	User user;

	char userName[20];


	cout << "Welcome to the High Score Keeper App" << endl;
	cout << "\n\tIf you are a new user, enter a username you would like (no spaces)";
	cout << "\n\tPlease enter your Username (no spaces): ";

	user.login();

	//Allows you to go back and login as different users after deleted your current user
	do{
	cout << "You are about to exit" << endl;
	cout << "Type the letter L if you would like to login again" << endl;
	cout << "Type any other character to exit" << endl;
	cin >> loginResp;
		if (toupper(loginResp) == 'L'){
			cout << "\n\tIf you are a new user, enter a username you would like (no spaces)";
			cout << "\n\tPlease enter your Username (no spaces): ";
			user.login();
			//Resets loginResp variable to avoid a loop
			//loginResp == 'X';
		};
	} while (toupper(loginResp) == 'L');

	system("PAUSE");
	return 0;
};
