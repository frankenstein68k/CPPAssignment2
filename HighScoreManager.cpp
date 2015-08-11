//Implementation file for HighScoreManager class
#include "HighScoreManager.h"

using namespace std;

HighScoreManager::HighScoreManager(){};
HighScoreManager::~HighScoreManager(){
};
HighScoreManager::highScoreInfo::highScoreInfo(){};

//Constructor
HighScoreManager::highScoreInfo::highScoreInfo(const std::string userNamex, const std::string datex, const unsigned int scorex) : userName(userNamex), date(datex), score(scorex)
{
	highScoreInfo::userName = userNamex;
	highScoreInfo::date = datex;
	highScoreInfo::score = scorex;

};

/////////////////////////////////////////////////////////////////////////////////////////
///////////THIS FUNCTION ALLOWS THE USER TO ADD HIGH SCORES TO THE LEADERBOARD///////////
/////////////////////////////////////////////////////////////////////////////////////////

void HighScoreManager::createHighScore()
{
	ofstream outfile;
	ifstream infile;
	
	highScoreInfo userHighScoreInfo;
	time_t rawtime;
	struct tm timeinfo;
	int i = 0;
	char currentTime[80];

	//get current time

	time(&rawtime);
	localtime_s(&timeinfo, &rawtime);
	strftime(currentTime, 80, "%d/%m/%y@%I:%M%p", &timeinfo);

	//set created highscore date to current time

	userHighScoreInfo.date = currentTime;

	//open highscore file

	outfile.open("highScore.dat", ios_base::app);

	//ask user for score

	cout << "Please enter your highscore." << endl;
	cin >> userHighScoreInfo.score;

	//write to file

	//NEIL REPLACE THE PLACEHOLDERUSER WITH THE CURRENT USER VVV!!!!!

	outfile << userHighScoreInfo.score << " " << "PlaceholderUser" << "," << userHighScoreInfo.date << endl;

	updateHighScore();

};

/////////////////////////////////////////////////////////////////////////////////////////
///THIS FUNCTION AUTOMATICALLY UPDATES THE HIGHSCORE LIST ONCE A HIGHSCORE GETS ADDED.///
/////////////////////////////////////////////////////////////////////////////////////////
void HighScoreManager::updateHighScore()
{
	ifstream infile;
	ofstream outfile;
	
	highScoreInfo userHighScoreInfo;
	string *fullLines;
	string fullLine;
	highScoreInfo highScoreArray[1000];
	struct highScores;
	int i = 0, lineNo;

	//open file to count number of lines
	infile.open("highscore.dat");

	lineNo = count(istreambuf_iterator<char>(infile), istreambuf_iterator<char>(), '\n');
	fullLines = new string[lineNo];

	//close file
	infile.close();

	//reopen file to write data to structure
	infile.open("highscore.dat");

	while (!infile.eof())
	{
		//get user score from .dat file
		infile >> highScoreArray[i].score;
		//get username from .dat file	
		getline(infile, highScoreArray[i].userName, ',');
		//get user score date from .dat file
		getline(infile, highScoreArray[i].date, '\n');

		i++;
	}

	//close file
	infile.close();

	//sort the structure in descending order
	sort(highScoreArray, highScoreArray + lineNo, [](highScoreInfo lhs, highScoreInfo rhs)
	{
		return lhs.score > rhs.score;
	});

	//open file to write the new high scores that were just created
	outfile.open("highScore.dat");

	for (int i = 0; i < lineNo; i++)
	{
		outfile << highScoreArray[i].score << highScoreArray[i].userName << "," << highScoreArray[i].date << endl;
	}

	system("pause");

};

/////////////////////////////////////////////////////////////////////////////////////////
///////////////////THIS FUNCTION PRINTS THE HIGHSCORES TO THE SCREEN.////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

void HighScoreManager::printHighScore()
{
	int topTenScores[10];
	int i = 0;
	char topTenScoresChar[10];
	string scoreDate;
	string userName;
	ifstream infile;
	infile.open("highscore.dat");


	cout << "Username			Score				Date" << endl;

	while (!infile.eof() && i < 10) 
	{
		//get user score from .dat file
		infile.getline(topTenScoresChar, 256, ' ');
		//get username from .dat file	
		getline(infile, userName, ',');
		//get user score date from .dat file
		getline(infile, scoreDate, '\n');
		//convert from char array to int array
		topTenScores[i] = atoi(topTenScoresChar);
		//print scores
		cout << setw(32) << left << userName << setw(25) << left << topTenScores[i] << scoreDate << endl;
		
		i++;
	}

	infile.close();
	system("pause");

};