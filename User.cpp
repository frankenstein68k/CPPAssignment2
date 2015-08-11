//Implementation file for User class
#include "User.h"
//#include <iostream>

using namespace std;
//Constructor
User::User(){
	cout << "New User created" << endl;

};

User::User(char uName){
	cout << "Overloading constructor" << endl;
	//userName = uName;
	userName = "Neil";
};
//Deconstructor
User::~User(){};

//User::User(char userNamex, char countryx, char genderx, int agex){
//	//user.age = agex;
//}


//bool checkIfUserExists(char);
//void updateUser(struct temp);
//void deleteUser();
//void setHighScore();
//void printUserName();

//private:
//	char userName[20];
//	char country[20];
//	char gender[10];
//	int age;

void User::printUserName(){
	cout << "USERNAME GOES HERE" << endl;
	cout << userName << endl;
}