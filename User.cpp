//Implementation file for User class
#include <iostream> //For files
#include <cctype> //For character handling
#include "User.h"

User::User(){};
User::userInfo::userInfo(){};

//Constructor
User::userInfo::userInfo(const std::string userNamex, const std::string countryx, const std::string genderx, const unsigned int agex) : userName(userNamex), country(countryx), gender(genderx), age(agex)
{
	userInfo::age = agex;
	userInfo::country = countryx;
	userInfo::gender = genderx;
	userInfo::age = agex;

};

void User::login(){



};

bool User::checkIfUserExists(std::string){

	return false;

};

void User::updateUser(){



};
void User::deleteUser(){



};
void User::setHighScore(){



};