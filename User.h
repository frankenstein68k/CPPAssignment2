//Specification file for the User class
#ifndef USER_H
#define USER_H

class User
{
public:
	User();//Constructor
	User(char[], char[], char[], int); //Constructor
	~User(); //Decoonstructor

	void loginUser();
	bool checkIfUserExists(char);
	void updateUser(struct temp);
	void deleteUser();
	void setHighScore();

private:

	char userName[20];
	char country[20];
	char gender[10];
	int age;

};
#endif