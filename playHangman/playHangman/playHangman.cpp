//################# NOT COMPLETE - SIDE PROJECT, PLEASE IGNORE #####################

#include <iostream>
using namespace std;

//function prototype
void welcomeMessage();
void underline();
void hangingMan();
void walkMan();
void deadMan();
void playGame();

//word for human to guess
//string wordsForGuessing()
//{
//	string wordOne = "Yoobee";
//}

int main()
{
	string guessWordOne = "Yoobee";
	int n = strlen("Yoobee");
	string wordArray[2][n]
	for (int i = 0; i < n; i++)
	{
		 = {;
	}
	

	welcomeMessage();
	underline();
	hangingMan();
	playGame();

}

void welcomeMessage()
{
	cout << "Welcome to play hangman. This game is to check your spelling skill.\n";
}

void underline()
{
	cout << "------------------------------------------------------------------- \n";

}

void hangingMan()
{
	cout << "   ____\n";
	cout << "  |    |\n";
	cout << "  |    O\n";
	cout << "  |   \\|/\n";
	cout << "  |    |\n";
	cout << "  |   / \\\n";
	cout << "  |     \n";
	cout << "  |     \n";
	cout << " ----     \n";

}

//void playGame(string guessLetter[], int n)
void playGame()
{
	
	for (int i = 0; i < 3; i++)
	{
		string guessOne;
		cout << "Guess the missing letter in Yo_bee : ";
		cin >> guessOne;
		if (guessOne == "o")
		{
			return walkMan();
			break;
		}
		else if (i == 2)
		{
			cout << "Your guess is wrong\n";
		}
		else
		{
			cout << "Sorry, try again\n";
		}
	}
	return deadMan();
	
}

void walkMan()
{
	cout << "Your guess is correct\n";
	cout << "\n";
	cout << "      O\n";
	cout << "     \\|/\n";
	cout << "      |\n";
	cout << "     / \\\n";
	cout << "       \n";

}

void deadMan()
{
	cout << "\n";
	cout << "   ____\n";
	cout << "  |    |\n";
	cout << "  |   /|\\\n";
	cout << "  |    |\n";
	cout << "  |   /|\\\n";
	cout << "  |    O\n";
	cout << "  |     \n";
	cout << "  |     \n";
	cout << " ----     \n";

}