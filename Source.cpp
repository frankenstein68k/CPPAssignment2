#include <iostream> //For files
#include <cctype> //For character handling
#include "User.h" //For User class
#include "User.cpp" //For User class

using namespace std;

//COMP 2006 - C++ Assignment 2
//Neil MacKenzie (Monday section) / Nick Kuznecov (Tuesday section) / lasfjlsd

int main(){
	int userResp;
	cout << "Welcome to the High Score Keeper App" << endl;
	cout << "1. Do you want to create, view or edit user information?" << endl;
	cout << "2. Do you want to view or edit the High score?" << endl;
	cin >> userResp;
	//User validation
	while (userResp != 1 && userResp != 2){
		cout << "Please choose 1 or 2" << endl;
		cin >> userResp;
	}
	//User confirmation
	cout << "you have chosen " << userResp << endl;

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
	cout << "you have chosen " << userResp << endl;

	//Calls to user functions
	if (userResp = 1){
		//check if user exist
		//login
	}
	else if (userResp = 2){
		//Updateuserlist
	}
	else if (userResp = 3){
		//delete user
	}
	else if (userResp = 4){
		//setHighScore
	}

	system("PAUSE");
	return 0;
}