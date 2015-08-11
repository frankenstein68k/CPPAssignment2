//Implementation file for User class
#include "User.h"
#include <iostream>
using namespace std;

//Constructors
//User::User(char userNamex, char countryx, char genderx, int agex){
//	//user.age = agex;
//}

User::User(void){
	cout << "Fucking user created there!" << endl;
	userName = "Billy";
	country = "undefined";
	gender = "undefined";
	age = 18;
};

//User::User(char uName[]){
//	cout << "Fucking user created there!" << endl;
//	userName = uName;
//	country = "undefined";
//	gender = "undefined";
//	age = 18;
//};

void loginUser();
bool checkIfUserExists(char[]);
void updateUser(struct temp);
void deleteUser();
void setHighScore();
void pukeInfo();