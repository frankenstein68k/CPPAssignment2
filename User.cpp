//Implementation file for User class
#include "User.h"
//#include <iostream>

using namespace std;

//Constructor
User::User(){
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


bool User::checkIfUserExists(){
	cout << "checkIfUserExist function" << endl;
	return false;
};
void User::updateUser(){
	char nCountry[25];
	char nGender[25];
	int nAge;

	cout << "Country? (no spaces): ";
	cin >> nCountry;
	cout << "Gender?: ";
	cin >> nGender;
	cout << "Age?: ";
	cin >> nAge;


	//Hard coding to prove that I can put string/char arrays and it will work
	country = "estonia";
	gender = "male";
	age = nAge;

	//trouble bad data in country and data doing it this way
	
	/*country = nCountry;
	gender = nGender;
	age = nAge;*/

};
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

void User::setCountry(char uCountry[]){
	country = uCountry;
}

void User::setGender(char uGender[]){
	gender = uGender;
}

void User::setAge(int uAge){
	age = uAge;
}

void User::printUserinfo(){
	cout << "\tUSER INFORMATION" << endl;
	cout << "Username: " << userName << endl;
	cout << "Country: " << country << endl;
	cout << "Gender: " << gender << endl;
	cout << "Age: " << age << endl;
 }
