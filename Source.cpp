#include <iostream> //For files
#include <cctype> //For character handling
#include "User.h" //For User class
#include "User.cpp" //For User class

using namespace std;

//COMP 2006 - C++ Assignment 2
//Neil MacKenzie (Monday section) / Nick Kuznecov (Tuesday section)

void userClassFunctions();
void highScoreFunctions();
void loginCreateNewUser();

int main(){
	int userResp;
	do{
		cout << "Welcome to the High Score Keeper App" << endl;
		cout << "1. Do you want to create, view or edit user information?" << endl;
		cout << "2. Do you want to view or edit the High score?" << endl;
		cout << "3. Exit program" << endl;
		cin >> userResp;
		//User validation
		while (userResp != 1 && userResp != 2 && userResp != 3){
			cout << "Please choose 1 or 2 or 3" << endl;
			cin >> userResp;
		}

		//User confirmation
		cout << "you have chosen " << userResp << endl;

		if (userResp == 1){
			userClassFunctions();
		}

		else if (userResp == 2){
			highScoreFunctions();
		}



	} while (userResp != 3);

	system("PAUSE");
	return 0;
}

void userClassFunctions(){
	int userResp;

	do{
		//User class functions
		cout << endl << endl;
		cout << "User information Section" << endl;
		cout << "1. Login/Create new user" << endl;
		cout << "2. Update/edit user" << endl;
		cout << "3. Delete user" << endl;
		cout << "4. Set high score" << endl;
		cout << "5. Return to main menu" << endl;
		cin >> userResp;
		//User validation
		while (userResp < 1 || userResp > 5){
			cout << "Please choose a number between 1-5" << endl;
			cin >> userResp;
		}
		//User confirmation
		cout << "you have chosen " << userResp << endl;

		//Calls to user functions
		if (userResp == 1){
			loginCreateNewUser();
		}
		else if (userResp == 2){
			//Updateuserlist
			cout << "Update user list" << endl;
		}
		else if (userResp == 3){
			//delete user
			cout << "Delete user" << endl;
			//deleteUser();
		}
		else if (userResp == 4){
			//setHighScore
			cout << "Set high Score" << endl;
		}
	} while (userResp != 5);
}

void loginCreateNewUser(){
	cout << "answer 1" << endl;
	//char getUserName[20];
	//char country[20];
	//char gender[10];
	//int age;

	//cout << "Please enter your username - No spaces" << endl;
	//cin >> getUserName;
	////if (checkIfUserExists(getUserName)){
	////	
	////	//loginUser(getUserName);
	////}
	///*	else
	//{*/
	//cout << "No user found by that name" << endl << endl;
	//cout << "Would you like to: " << endl;
	//cout << "1. Create a new user" << endl;
	//cout << "2. Exit" << endl;
	//cin >> userResp;
	////User validation
	//while (userResp != 1 && userResp != 2){
	//	cout << "Please choose 1 or 2" << endl;
	//	cin >> userResp;
	//}
	//if (userResp == 1){
	//	cout << "Please enter information below where necessary" << endl;
	//	cout << "Username: " << getUserName << endl;
	//	cout << "Country: ";
	//	cin >> country;
	//	cout << "Gender: ";
	//	cin >> gender;
	//	cout << "Age: ";
	//	cin >> age;
	//	//User new1(getUserName, country, gender, age);

	//	cout << "New user created" << endl;
	//}

	////}
}

void highScoreFunctions(){
	cout << "Nick's work" << endl;
}
