// "DigiGuess It?"
// A mini programming project by JB Tugano & CJ Chavez (C++)
// CPE 201 (PLDL01E)
// Finals' Project

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n,i;
    int number;
    int choice;
    bool isGuessed = false;
    char playAgain = 'y';
    
    cout << "Welcome to ''DigiGuess It?''\n";
    cout << "A mini programming project by: JB Tugano and CJ Chavez" << endl;
    cout << "_____________________________________________________\n";
	cout << "0. EXIT" << endl << "1. PLAY THE GAME\n\n" << endl;
	cin >> choice;
	
	switch(choice)
	    {
	        case 0:
	            cout << "---------------------------------------------------\n";
	            cout << "Aww...I hope we can play soon. Thank you very much!\n";
	            return 0;
	        case 1:
	            cout << "Come On! Let's Play 'DigiGuess It?'\n";
	            cout << "NOTE: This game is in Survival Mode (when you WIN).\n";
	            cout << "-----------------------------------------------\n";
	            break;
	    }

    srand(time(0)); // Generating different random numbers each time game will run
    number=rand()%100 + 1; //Generating random numbers
    
    while (playAgain == 'y' || playAgain == 'Y')
    {
     
    cout << "Guess a number between 1-100, only 10 turns to take: ";
    for(i=0;i<10;i++)
    {
    cin>>n;
    if(number==n)
    {
      cout<<"\nHOORAY, WELL DONE! You have guessed the right number, "<<number;
      cout<<"\nNumber of guesses made: "<<i+1 << endl;
      break;
    }
    
    else if(number>n)
    {
      cout<<"\nToo low, Turns left: "<<10-(i+1);
      if(10-(i+1)>0)
      {
          cout<<"\nTry again, use higher digit: ";
        }
    }
    else if(number<n)
    {
      cout<<"\nToo high, Turns left: "<<10-(i+1);
      if(10-(i+1)>0)
      {
          cout<<"\nTry again, use lower digit: ";
        }
    }
  }
  if(i==10)
  {
    cout<<"\n\nGAME OVER! You failed to guess the correct number.";
    cout<<"\nThe correct answer is: "<<number << endl;
    
    cout << "Would you like to play again? (y/n)" << endl;
      cin >> playAgain;
      if (playAgain == 'y' || playAgain == 'Y')
        isGuessed = false;
      else
        return 0;
    }
    
  } 
    return 0;
}
