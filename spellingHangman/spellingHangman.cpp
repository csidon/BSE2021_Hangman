#include <iostream>
using namespace std;

//function prototype
void welcomeMessage();
void underline();
void hangingMan();
void walkMan();
void deadMan();
int playGame(string Letter);


int main()
{
	string guessLetter;
	
	welcomeMessage();
	underline();
	hangingMan();

	//Loop to give the player 3 chances to guess the right letter
	for (int i = 0; i < 3; i++)
	{
		cout << "\nGuess the missing letter in Yo_bee : ";
		cin >> guessLetter;
		playGame(guessLetter); //passes the input to function playGame

		int answer = playGame(guessLetter); //takes the return value of playGame and assigns it to var answer 

		//checks to see if answer is correct or wrong, or if the player has already made 3 guesses
		if (answer == 1)
		{
			walkMan(); //if correct, call function walkMan
			break;
		}
		else if (i == 2)
		{
			deadMan(); //if player has guessed 3 times, call function deadMan
			break;
		}
		else
		{
			cout << "Sorry, try again"; //if wrong, display try again message, then go back through the loop (increasing i by 1)
		}
	}
	
}

//function that displays the welcome message. Not necessary.
void welcomeMessage()
{
	cout << "Welcome to play hangman. This game is to check your spelling skill.\n";
}

//function that draws a line when called
void underline()
{
	cout << "------------------------------------------------------------------- \n";

}

//function that displays a hanging man
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

//function checks to see if the passed parameter is "o" or not, and returns 1 if yes, and 0 if not
int playGame(string letter)
{
	if (letter == "o")
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//function that draws a happy walking man
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

//function that draws a sad dead man
void deadMan()
{
	cout << "\nYour guess is wrong\n";
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

