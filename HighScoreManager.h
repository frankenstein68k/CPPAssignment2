//Specification file for the HighScoreManager class
#include <iostream> //For files
#include <fstream>
#include <cctype> //For character handling 

class HighScoreManager
{
public:
	HighScoreManager();//Constructor
	HighScoreManager(char, char, int); //Constructor
	~HighScoreManager(); //Deconstructor

	void createHighScore();
	void updateHighScore();
	void printHighScore();

private:
	struct highScoreInfo{
	private:
		highScoreInfo();
	public:
		highScoreInfo(std::string userNamex, std::string datex, unsigned int scorex);
		std::string userName;
		std::string date;
		unsigned int score;
	};
};