// GuessMyNumberTylerGantz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

		int secretNumber = rand() % 100 = 1; 
		
		int tries = 0;
		int guess;
	 
		cout << "\Welcome to Guess My Number\n\n";
		do
		{
			cout << "Enter a guess: ";
			cin >> guess;
			++tries;

			if (guess > secretNumber)
			{
				cout << "Too high!\n\n";
			}
			else if (guess < secretNumber)
			{
				cout << "Too Low!\n\n";
			}
			else
			{
				cout << "\nThat's it! You got it in " << tries << "Guesses!\n";
			}
		} while (guess != secretNumber);
    return 0;
}

