//Implementation file for User class
#include "User.h"
#include "HighScoreManager.h"

using namespace std;

User::User(){};
User::~User(){};
User::UserInfo::UserInfo(){};

//Constructor
User::UserInfo::UserInfo(const std::string userNamex, const std::string countryx, const std::string genderx, const unsigned int agex) : userName(userNamex), country(countryx), gender(genderx), age(agex)
{
	UserInfo::userName = userNamex;
	UserInfo::country = countryx;
	UserInfo::gender = genderx;
	UserInfo::age = agex;
};

void User::login()
{
	ofstream outfile;
	ifstream infile;

	UserInfo UserInfo;

    string *fullLines;
	string fullLine;

	struct highScores;
	int i = 0, lineNo, userResp;


	//open file to count number of lines
	infile.open("users.txt");

	lineNo = count(istreambuf_iterator<char>(infile), istreambuf_iterator<char>(), '\n');
	fullLines = new string[lineNo];

	//close file
	infile.close();

	cin >> UserInfo.userName;

	User::checkIfUserExists(lineNo, UserInfo.userName);

	do{
		//User class functions
		cout << endl;
		cout << "\n\tUser information Section" << endl;
		cout << "\n\t1. Update/edit user" << endl;
		cout << "\n\t2. Delete user" << endl;
		cout << "\n\t3. High Score Manager" << endl;
		cout << "\n\t4. Exit Program" << endl;
		cin >> userResp;

		//User validation
		while (userResp < 1 || userResp > 4){
			cout << "Please choose a number between 1-4" << endl;
			cin >> userResp;
		}

		system("CLS");

		//Calls to user functions
		if (userResp == 1)
		{
			User::updateUser(lineNo, UserInfo.userName);
		}
		else if (userResp == 2)
		{
			//Checks if user actually deleted user
			if (User::deleteUser(lineNo, UserInfo.userName)){
				//Ensures the user doesn't return to the user window
				userResp = 4;
			}
		}
		else if (userResp == 3)
		{
			do{
				system("CLS");
				//User class functions
				cout << "\n\tHigh Score Manager" << endl;
				cout << "\n\t1. Create high score" << endl;
				cout << "\n\t2. Print high score" << endl;
				cout << "\n\t3. Exit to previous menu" << endl;
				cin >> userResp;

				//User validation
				while (userResp < 1 || userResp > 3){
					cout << "Please choose a number between 1-3" << endl;
					cin >> userResp;
				}

				if (userResp == 1)
				{
					HighScoreManager HighScore;
					HighScore.createHighScore(UserInfo.userName);
				}
				else if (userResp == 2)
				{
					HighScoreManager HighScore;
					HighScore.printHighScore();
				}
			} while (userResp != 3);
		}
	} while (userResp != 4);
}
void User::checkIfUserExists(int lineNo, std::string UserName)
{
	ofstream outfile;
	ifstream infile;
	int i = 0;
	UserInfo userArray[1000];
	string exists, newCountryStr, newGenderStr;
	int newAgeInt;
	
	infile.open("users.txt");

	while (!infile.eof())
	{
		//get username from .dat file	
		getline(infile, userArray[i].userName, ':');
		infile.ignore(256, '\n');
		i++;
	}


	for (int i = 0; i < (lineNo +1); i++)
	{
		if (userArray[i].userName != UserName && userArray[i].userName == userArray[lineNo + 1].userName && exists != "true")
		{
			cout << "\n\tWelcome new user, your username has been entered into our database." << endl;
			cout << "\n\tPlease enter your profile information" << endl;
			cout << "\n\tCountry: ";
			cin >> newCountryStr;
			cout << "\n\tGender: ";
			cin >> newGenderStr;
			cout << "\n\tAge: ";
			cin >> newAgeInt;

			outfile.open("users.txt", ios_base::app);
			
			outfile << UserName << ":" << newCountryStr << "," << newGenderStr << "," << newAgeInt << endl;
		}
		else if (userArray[i].userName == UserName)
		{
			cout << "\n\tUsername Already Exists! Welcome back!" << endl;
			exists = "true";
		}
	}

	//close file
	infile.close();
}

void User::updateUser(int lineNo, std::string UserName)
{
	ofstream outfile;
	ifstream infile;
	UserInfo profileArray[1000];
	int updatedAgeInt, i = 0;
	string updateProfileStr, updateCountryStr, updateGenderStr, updateUserStr, oldProfileStr;

	infile.open("users.txt");

	while (!infile.eof())
	{
		//get username from .dat file	
		getline(infile, profileArray[i].userName, ':');
		getline(infile, profileArray[i].country, ',');
		getline(infile, profileArray[i].gender, ',');
		infile >> profileArray[i].age;
		infile.ignore(256, '\n');
		i++;
	}

	cout << "Welcome, " << UserName << ", update your profile:" << endl;
	cout << "Country: ";
	cin >> updateCountryStr;
	cout << "Gender: ";
	cin >> updateGenderStr;
	cout << "Age: ";
	cin >> updatedAgeInt;

	for (int i = 0; i < lineNo; i++)
	{
		if (profileArray[i].userName == UserName)
		{
			profileArray[i].country = updateCountryStr;
			profileArray[i].gender = updateGenderStr;
			profileArray[i].age = updatedAgeInt;

			outfile.open("users.txt");

			for (int i = 0; i < lineNo; i++)
			{
				outfile << profileArray[i].userName << ":" << profileArray[i].country << "," << profileArray[i].gender << "," << profileArray[i].age << endl;
			}

		}
	}
}
bool User::deleteUser(int lineNo, std::string UserName)
{
	ofstream outfile;
	ifstream infile;
	UserInfo profileArray[1000];
	int updatedAgeInt, i = 0, j=0;
	string userDelete;

	cout << "Are you sure you want to delete your profile? (yes/no)" << endl;
	cin >> userDelete;

	while (userDelete != "Yes" && userDelete != "yes" && userDelete != "no" && userDelete != "No"){
		cout << "Please either type Yes or No" << endl;
		cin >> userDelete;
	};

	
	if (userDelete == "Yes" || userDelete == "yes")
	{

		infile.open("users.txt");

		while (!infile.eof())
		{
			//get username from .dat file	
			getline(infile, profileArray[i].userName, ':');
			getline(infile, profileArray[i].country, ',');
			getline(infile, profileArray[i].gender, ',');
			infile >> profileArray[i].age;
			infile.ignore(256, '\n');
			i++;
		}

		infile.close();


		for (int i = 0; i < lineNo; i++)
		{
			if (profileArray[i].userName == UserName)
			{
				UserInfo tempArray[1000];
				int temp1;

				infile.open("users.txt");

				while (!infile.eof())
				{
					//get username from .dat file	
					getline(infile, tempArray[j].userName, ':');
					getline(infile, tempArray[j].country, ',');
					getline(infile, tempArray[j].gender, ',');
					infile >> tempArray[j].age;
					infile.ignore(256, '\n');
					j++;
				}

				tempArray[lineNo] = profileArray[i];
				tempArray[i] = profileArray[lineNo - 1];

				outfile.open("users.txt");

				for (int i = 0; i < lineNo - 1; i++)
				{
					outfile << tempArray[i].userName << ":" << tempArray[i].country << "," << tempArray[i].gender << "," << tempArray[i].age << endl;
				}

			}
		}
		//Indicates that the user was deleted
		return true;
	}
	else
	{
		return false;
	}
	 
}