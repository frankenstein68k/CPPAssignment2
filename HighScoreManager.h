//Specification file for the HighScoreManager class
#include <iostream> //For files
#include <fstream>
#include <cctype> //For character handling
#include <string>
#include <chrono>
#include <vector>
#include <algorithm>
#include <iomanip>

class HighScoreManager
{
public:
	HighScoreManager();//Constructor
	HighScoreManager(char, char, int); //Constructor
	~HighScoreManager(); //Deconstructor

	void createHighScore(std::string);
	void updateHighScore();
	void printHighScore();


private:
	struct highScoreInfo{
	private:
	public:
		highScoreInfo();
		highScoreInfo(std::string userNamex, std::string datex, unsigned int scorex);
		std::string userName;
		std::string date;
		unsigned int score;
	};
};