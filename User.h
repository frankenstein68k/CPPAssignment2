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


	bool checkIfUserExists(char);
	void updateUser(struct temp);
	void deleteUser();
	void setHighScore();
	void printUserName();
	char* getUserName();

private:
		char *userName;
		char *country;
		char *gender;
		int age;
};
#endif