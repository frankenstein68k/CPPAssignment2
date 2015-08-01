//Implementation file for HighScoreManager class
#include "HighScoreManager.h"

using namespace std;

HighScoreManager::HighScoreManager(){};
HighScoreManager::highScoreInfo::highScoreInfo(){};

//Constructor
HighScoreManager::highScoreInfo::highScoreInfo(const std::string userNamex, const std::string datex, const unsigned int scorex) : userName(userNamex), date(datex), score(scorex)
{
	highScoreInfo::userName = userNamex;
	highScoreInfo::date = datex;
	highScoreInfo::score = scorex;

};

void HighScoreManager::createHighScore()
{
	ofstream outfile;

	outfile.open("highScore.dat");

	outfile << "Username			Score				Date";

};

void HighScoreManager::updateHighScore()
{



};

void HighScoreManager::printHighScore()
{



};
