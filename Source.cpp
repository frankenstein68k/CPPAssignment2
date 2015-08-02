#include <iostream> //For files
#include <cctype> //For character handling
#include "User.h" //For User class
#include "User.cpp" //For User class

using namespace std;

//COMP 2006 - C++ Assignment 2
//Neil MacKenzie (Monday section) / Nick Kuznecov (Tuesday section)

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

		char getUserName[20];
		char country[20];
		char gender[10];
		int age;

		cout << "Please enter your username - No spaces" << endl;
		cin >> getUserName;
		//if (checkIfUserExists(getUserName)){
		//	
		//	//loginUser(getUserName);
		//}
	/*	else
		{*/
			cout << "No user found by that name" << endl << endl;
			cout << "Would you like to: " << endl;
			cout << "1. Create a new user" << endl;
			cout << "2. Exit" << endl;
			cin >> userResp;
			//User validation
			while (userResp != 1 && userResp != 2){
				cout << "Please choose 1 or 2" << endl;
				cin >> userResp;
			}
			if (userResp == 1){
				cout << "Please enter information below where necessary" << endl;
				cout << "Username: " << getUserName << endl;
				cout << "Country: ";
				cin >> country;
				cout << "Gender: ";
				cin >> gender;
				cout << "Age: ";
				cin >> age;
				//User new1(getUserName, country, gender, age);

				cout << "New user created" << endl;
			}

		//}

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