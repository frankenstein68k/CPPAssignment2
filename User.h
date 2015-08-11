//Specification file for the User class
#ifndef USER_H
#define USER_H

class User
{
public:
	User();//Constructor
	//User(char[], char[], char[], int); //Constructor
	//User(char[]);
	~User(); //Decoonstructor

	void loginUser();
	bool checkIfUserExists(char);
	void updateUser(struct temp);
	void deleteUser();
	void setHighScore();
	void pukeInfo();

private:

	char *userName;
	char *country;
	char *gender;
	int age;

};
#endif