//Specification file for the User class


class User
{
public:
	User();//Constructor
	User(std::string, std::string, std::string, int); //Constructor
	~User(); //Deconstructor

	bool checkIfUserExists(std::string);
	void login();
	void updateUser();
	void deleteUser();
	void setHighScore();

private:
	struct userInfo{
	private:
		userInfo();
	public:
		userInfo(std::string userNamex, std::string countryx, std::string genderx, unsigned int agex);
		std::string userName;
		std::string country;
		std::string gender;
		unsigned int age;
	};
};
