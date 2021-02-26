#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv) 
{
	int rand_num;
	int guess;
	int guess_num = 0;
	bool guessed;
	
	srand(time(NULL));
	rand_num = (rand() % 100) + 1;
	cout << "I'm thinking of a number between 1 and 100...\n\n";
	
	while (!guessed)
	{
		cout << "Please guess a number: "; 
		cin >> guess;
		++guess_num;
		
		if (guess == rand_num)
		{
			cout << "\nCongratulations! You guessed the number in " << guess_num << " guesses!";
			guessed = true;
		}
		
		else if (guess < rand_num)
		{
			cout << guess << " is too low.\n\n";
		}
		
		else
		{
			cout << guess << " is too high.\n\n";
		}
		
	}
	
	return 0;
}