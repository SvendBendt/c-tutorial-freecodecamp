#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char getPlayerName(char playerName){            //Successfully created and called a function
        printf("Player 1, enter your name: ");          //Add ForceUpperCase
        fgets(playerName,20,stdin);
        return playerName;
    }




int main(){
    char player1[20];
    char player2[20];
    char playerName[20];

    int numberOfPlayers;
    int namesOk;
    int secretNumber;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    int outOfGuesses = 0;
    int outOfGuessesFinals = 0;
    int firstRoundLost = 0;

    char getPlayerName(char playerName);



    printf("\n*** Welcome to the guessing game of awesome and win *** \n\n\n");
    getPlayerName(playerName);

    //printf("%s", playerName);

numberOfPlayers = 1;

// 1 player game
    if(numberOfPlayers == 1){
        //Generates random number for solo play
        srand(time(0));
        secretNumber = (rand()%9);
        /*  int i, n;  // What's the difference between this, and the seemingly simpler one abowe?
        time_t t;
        srand((unsigned) time(&t));
        secretNumber = (rand()%9); */

        printf("\n\n\n*** And so it begins... ***\n\n");
        printf("\n\n***      ROUND 1        ***\n\n");
        while(guess !=secretNumber && outOfGuesses == 0){
            if(guessCount < guessLimit){
                printf("Enter a number: ");
                scanf("%d", &guess);
                guessCount++;
                if(guess !=secretNumber){
                    printf("\n\nWROOOOOOOOOOOOOOOOOOOOONG, try again!\n\n\n");                 //Add countdown
                }
            }else {
                outOfGuesses = 1;                           //Initial typo: An equal sign too much "=="
            }
        }
        if(outOfGuesses == 1){
            printf("\n            You didn't even make it to round 2 lol\n");
            firstRoundLost = 1;
        }else {
            printf("\n               You win round 1!\n\n");
            printf("\n\n***      ROUND 2        ***\n\n");
            secretNumber = (rand()%9);
            outOfGuessesFinals = 0;
            guessCount = 0;
            guess = 0;
                while(guess !=secretNumber && outOfGuessesFinals == 0){
                if(guessCount < guessLimit){
                    printf("Enter a number: ");
                    scanf("%d", &guess);
                    guessCount++;
                    if(guess !=secretNumber){
                    printf("\n\nWROOOOOOOOOOOOOOOOOOOOONG, try again!\n\n\n");
                    }
                }else {
                    outOfGuessesFinals = 1;                           //Initial typo: An equal sign too much "=="
                }
        }
        }
        if(outOfGuesses == 0 && outOfGuessesFinals == 0){
            printf("\n\n\n               You are the winner of everything!\n");
        }else if (firstRoundLost == 0){
            printf("\nYou are out of guesses, but at least you won the first round\n");
        }else {
            printf("\n\n\n\n\n Can I get rid of this line?");                               //Can I get rid of this line?
        }
        printf("\n\n\n\n\n");

//2 player game
    }else {
        int player1SecretNumber;
        int player2SecretNumber;
        printf("\n\n\n*** And so it begins, may the best individual win... ***\n\n\n");
        printf("%s look away\n", player1);
        printf("%s, enter a number between 0 to 9: ", player2);
        scanf("%d", &player1SecretNumber);

        while(guess !=player1SecretNumber && outOfGuesses == 0){
            if(guessCount < guessLimit){
                printf("Enter a number: ");
                scanf("%d", &guess);
                guessCount++;
                if(guess !=player1SecretNumber){
                    printf("WROOOOOOOOOOOOOOOOOOOOONG, try again!\n");                 //Add countdown
                }
            }else {
                outOfGuesses = 1;
            }
        }
        if(outOfGuesses == 1){
            printf("\n            You didn't even make it to round 2 lol\n");
            firstRoundLost = 1;
        }else {
            printf("\n               You win round 1!\n\n");
            outOfGuessesFinals = 0;
            guessCount = 0;
            guess = 0;
                while(guess !=player1SecretNumber && outOfGuessesFinals == 0){
                if(guessCount < guessLimit){
                    printf("Enter a number: ");
                    scanf("%d", &guess);
                    guessCount++;
                }else {
                    outOfGuessesFinals = 1;                           //Initial typo: An equal sign too much "=="
                }
        }
        }
        if(outOfGuesses == 0 && outOfGuessesFinals == 0){
            printf("\n\n\n               You are the winner of everything!\n");
        }else if (firstRoundLost == 0){
            printf("\nYou are out of guesses, but at least you won the first round\n");
        }else {
            printf("\n\n\n\n\n Can I get rid of this line?"); //Can I get rid of this line?
        }
        printf("\n\n\n\n\n");
    }

    return 0;
}

/*  Tasks
    WORK: Make it a 2 player game where the opponent picks the random number
        Add "select a number for round 2"
        Select number of players again

    Add "Wanna play again"
    Add highscore, saved in file
    Think of elements that add a strategical element, ie "Select two identical numbers, higher risk, higher reward"
    Game module called as a function
    Make it a option to pick amount of round
    The make algorithm for winning best out of X
    While loop for straffesparkskonkurrence - vælg tre numre lol
    Make tournament mode for 4 players

    DONE: RNG for solo play
*/



        //if("player1" = "player2"){
                //    printf("You both have the same name? Well that's stupid, so now player 2's name is DerpyMcDerpFace");
                //}  Doesn't work

            //    printf("\n\nWhat part of enter 1 or 2 was unclear to you? Try again!\n\n"); Use Later


