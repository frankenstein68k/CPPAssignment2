#ifndef USER_H
#define USER_H

class User
{
public:
	User();
	~User();

	bool checkIfUserExists(char);
	void updateUser(struct temp);
	void deleteUser();
	void setHighScore();



private:
	struct user{
		char userName[20];
		char country[20];
		char gender[10];
		int age;
	};
};
#endif

User::User()
{
}

User::~User()
{
}