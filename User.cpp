//Implementation file for User class
#include "User.h"
//#include <iostream>

using namespace std;

//Constructor
User::User(){
	cout << "New User created" << endl;

};
//Overloaded constructor
User::User(char uName[]){
	cout << "Overloading constructor" << endl;
	cout << uName << endl;
	userName = uName;
	country = "Undefind";
	gender = "Undefined";
	age = 18;
};
//Deconstructor
User::~User(){};


//bool checkIfUserExists(char);
//void updateUser(struct temp);
//void deleteUser();
//void setHighScore();

char* User::getUserName(){
	cout << "getUserName function " << endl;
	char* str = userName;
	return str;
}

void User::printUserName(){
	cout << "USERNAME GOES HERE" << endl;
	cout << userName << endl;
}