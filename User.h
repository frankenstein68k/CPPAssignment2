//Specification file for the User class
#ifndef USER_H
#define USER_H
#include <iostream> //For files
#include <fstream>
#include <cctype> //For character handling

class User
{
public:
	User();//Constructor
	User(char[]);
	//User(char, char, char, int); //Constructor
	~User(); //Decoonstructor


	bool checkIfUserExists();
	void updateUser();
	void deleteUser();
	void setHighScore();
	void printUserName();
	char* getUserName();
	void setCountry(char[]);
	void setGender(char[]);
	void setAge(int);
	void printUserinfo();

private:
		char *userName;
		char *country;
		char *gender;
		int age;
};
#endif