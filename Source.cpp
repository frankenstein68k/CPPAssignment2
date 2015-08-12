#include <iostream> //For files
#include <cctype> //For character handling
#include <string>
#include <fstream>
#include "User.h" //For User class
#include "HighScoreManager.h"

using namespace std;

//COMP 2006 - C++ Assignment 2
//Neil MacKenzie (Monday section) / Nick Kuznecov (Tuesday section)

//int displayMainMenu();
//void displayChoice(string&);

int main(){

	int userResp = 1;
	string optionTitle;
	User user;

	char userName[20];


	cout << "Welcome to the High Score Keeper App" << endl;
	cout << "\n\tIf you are a new user, enter a username you would like (no spaces)";
	cout << "\n\tPlease enter your Username (no spaces): ";
	user.login();

	system("PAUSE");
	return 0;
};

//int displayMainMenu()
//{
//	int userResp;
//
//	cout << "Welcome to the High Score Keeper App" << endl;
//	cout << "1. Do you want to create, view or edit user information?" << endl;
//	cout << "2. Do you want to view or edit the High score?" << endl;
//	cout << "3. Would you like to exit the program?" << endl;
//	cin >> userResp;
//	while (userResp != 1 && userResp != 2 && userResp != 3){
//		cout << "Please enter type a number between and including 1 and 3" << endl;
//		cin >> userResp;
//	}
//	cout << endl;
//
//	return userResp;
//}

//void displayChoice(string& option)
//{
//	cout << "You have chosen to " << option << endl << endl;
//}