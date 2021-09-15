/*
This game will have the user guess a number between 0 and 100, inclusive. 
Jennifer Wang
9/14/21
*/

#include <iostream>
using namespace std;

int main () 
{
  bool stillPlaying = true;

  while (stillPlaying == true) 
    {
      // generate a random number between 0 and 100 (inclusive)
      int randomNum = 0;
      srand (time(NULL));
      randomNum = rand() % 101;
      // cout << randomNum << endl; 
      cout << "Guess the random Number" << endl;

      int guess = -1;
      //number of guesses starts at 0
      int guessTracker = 0;
      char yesno = 'a';


      while (guess != randomNum) 
	{
	  cin >> guess;
	  // cout << "You typed " << guess << endl;

	  /* if the guess is greater than the random number, computer tells
	  // you its too high and guess tracker increases by one */
	  if (guess > randomNum) 
	    {
	      cout << "Guess is too high." << endl;
	      guessTracker = guessTracker + 1;
	      // cout << guessTracker << endl;
	    }

	  /* if guess is less than the random number, computer tells
	  / you its too low and guess tracker increases by one */
	  if (guess < randomNum)
	    {
	     
	      cout << "Guess is too low." << endl;
	      guessTracker = guessTracker + 1;
	      //cout << guessTracker << endl;
	    }

	  /* if guess is the random number, computer tells you
	  its correct, guess tracker increases by one and 
	  number of guesses is displayed */
	  if (guess == randomNum) 
	    {
	      cout << "Guess is correct!" << endl;
	      guessTracker = guessTracker + 1;
	       cout << "Number of guesses: " << guessTracker << endl;
	    }
	}

      /* asks if player wants to play again. if "y" is typed, then restarts the game. 
	 if no, loop stops. */
      cout << "Play again? Type 'y' to play again and 'n' to quit" << endl;
      cin >> yesno;
      if (yesno == 'y')
	{
	  stillPlaying = true;
	  guessTracker = 0;
	}
      else 
	{
	  stillPlaying = false;
	}
 
          

    }

}
