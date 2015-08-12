#include <iostream> //For files
#include <fstream>
#include <cctype> //For character handling
#include <string>
#include <chrono>
#include <vector>
#include <algorithm>
#include <iomanip>

class User
{
public:
	User();//Constructor
	User(char, char, char, int); //Constructor
	~User(); //Deconstructor

	void checkIfUserExists(int, std::string);
	void updateUser(int, std::string);
	void deleteUser(int, std::string);
	void login();


private:
	struct UserInfo{
	private:
	public:
		UserInfo();
		UserInfo(std::string userNamex, std::string countryx, std::string genderx, unsigned int agex);
		std::string userName;
		std::string country;
		std::string gender;
		int age;

	};
};