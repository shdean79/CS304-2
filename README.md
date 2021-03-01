# CS304-2
Instructions and results:
This project was created for my CS 231 class at JSU. This lab was intended to strengthen skills related to the use of control statements to alter the order of evaluation of the statements in our programs. This lab uses particularly selection and iteration. These two control statements were used to create a simple number guessing game. The game randomly generates and decides on a number between 1 and 100 in secret. The user is then prompted to enter a number and try to guess the secret number. If the user input is different, the program prints the number the user entered, and tells the user that the number they entered is too high or too low, according to which one is applicable. The program also keeps up with the number of times the user incorrectly guessed the secret random number. When the user eventually gets the correct number, a message of congratulations is displayed along with a prompt showing how many attempts the user took to guess the secret number. 

Inclusions:
Libraries had to be included for the random function to work properly. The libraries included are <stdlib.h> and <ctime>. The standard library was incorporated to apply the srand and rand functions, which are used to initialize the random number generator and generate the random number, respectively. The time library was included to get the current time and give the functions srand and rand a base to work off for their random number generation. 

Variables:
Variables are declared first for this assignment. A variable for the random number generator to store its newly generated number, as well as a variable for the user’s input guess and its corresponding number of guesses. A Boolean variable is also used to initialize the for loop of the game to begin play and is assigned to the false value. The random number variable is assigned a random number between 1 and 100.

Functioning: 
The game is simple. It begins with a prompt to let the user know what it is looking for, which is a randomly generated number between 1 and 100. The program then prompts the user to guess a number within this range. The primary functioning of the program is contained within a while loop. 
This while loop uses the Boolean variable “guessed” to control its functioning. It uses the argument “not”, in this case being “not guessed”. After the prompt for the user’s guess, the program reads the user entered integer into the variable “guess”. Once the user has entered a new number, the program updates the total number of guesses the user has entered. This total number of times the user has guessed is assigned to the variable “guess_num”. Once the number of guesses has been updated and recorded, the while loop continues with a nested if-else statement. 
The initial if statement uses the condition that brings about the end of the program, being that its condition checks for the user’s entered guess to be equal to the randomly generated number from before. If that condition is met, the program prints a message of congratulations, along with the number of guesses it took you to figure out the random number. When it prints this message, it converts the initial Boolean control variable to a value of true, causing the game to exit once the statement is reevaluated at the beginning of the while loop. 
The else if statement is assigned to the possibility of the guess being too low. If the guess is less than the randomly generated number, the program outputs the guess that the user just entered along with a message that states the guess was too low. The else statement covers any other possibilities, but in this case, there is only one other possibility: for the guess to be too high. Like the else if statement, it outputs the guess the user just entered along with a message that it is too high. If either of the else statements are activated, the while loop continues until the user guesses the correct number, and the Boolean variable is flipped to stop the game. 

Overview:
I feel like up to this point in my coding career, this has been the most fun project for me to work on. I really enjoy these simple games, and I certainly appreciate the simplicity of the code as well. It took me a bit to figure out how exactly to do the random number generator, but I feel like it was about as good an implementation as what I could have done given my current skillset and knowledge of C++. While this game was relatively simple to create, I can see the applications of it, especially the random number generator. Overall, though, I feel as this project was a good starting point to help me understand the basics of this language a bit more. 

Here is a sample run of the program: 

I'm thinking of a number between 1 and 100...

Please guess a number: 52
52 is too low.

Please guess a number: 89
89 is too high.

Please guess a number: 63
63 is too high.

Please guess a number: 60
60 is too high.

Please guess a number: 57
57 is too low.

Please guess a number: 59

Congratulations! You guessed the number in 6 guesses!
--------------------------------
Process exited after 22.92 seconds with return value 0
Press any key to continue . . .
