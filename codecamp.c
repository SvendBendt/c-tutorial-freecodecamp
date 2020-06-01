#include <stdio.h>
#include <stdlib.h>
/*

double cube(double fdNum);          //Prototyping


int max(int num1, int num2, int num3){
    int result;

    if (num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

struct Student{                                             //structs written with capital S "S"tudent
    char name[50];
    char major[50];
    int age;
    double gpa;
};

*/

int main(){

/* General ignore

//Hello World
   printf("Hello World\n");

//Drawing a shape
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

    printf("    /|\n");
    printf("   / |\n");
    printf("  /  |\n");
    printf(" /___|\n");

//Variables
    char characterName[4] = "John";                                    //[]defines the size when making a string
    int characterAge = 35;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old\n", characterAge);
    characterAge = 200.3;                                              //Testing how INT handles decimal numbers
    printf("He really liked the name %s\n", characterName);
    printf("but did nok like being %d\n", characterAge);

//Data Types
    int age = 40;
    double gpa = 3.6;
    char grade ='A';                                                    //%c calls a char, %s calls a "string", %d calls a double
    printf("Age is age is age and age is %d\n", age);                   //First "find the answer" experience
    printf("Test of single char %c\n\n", grade);
    char phrase[] = "A string is actually a char-array";
    printf("Test of char-array: %s\n", phrase);

//Printf
    printf("\"\n");                                                     //"printf" Is a function
    int favNum =7;                                                      //printf(""")returns an error, use \"
    printf("My favorite %s is %d but not %f. Character!: %c \n", "number", favNum, 7.7, 'X');

//Working with numbers
    printf("%f \n", 8.9);
    printf("%f \n", 5.0 + 4.5);                                         //Decimal points are lost
    printf("%f \n", 5.0 / 4.0);
    int num = 6;
    printf("%f\n", pow(2, 3));
    printf("%f\n", sqrt(36));
    printf("%f\n", ceil(35.356));
    printf("%f\n", floor(35.356));

//Comments
    printf("Comments are fun");                                         //Here I learned about nested comments

//Constants
    const int NUM= 5;
    printf("%d", NUM);
    NUM = 4; --- Nope!
    printf("This is also considered a constant"); //A piece of information in the program that's unchangeable


//Getting User Input
    char promptname[20];
    printf("enter you name:");
    fgets(promptname, 20, stdin );
    printf("Your name is %c\n\n", promptname);

    int promptage;
    printf("Enter you age: ");
    scanf("%d", &promptage);                         //The ampersand "&" is a pointer
    printf("You are %d years old\n\n", promptage);

    char promptgrade;
    printf("What is your grade?");
    scanf(" %c", &promptgrade);                         //adding a blank space clears the newline that's left over from last call
    printf("Your grade is %c\n\n", promptgrade);
    printf("I have made sound!!! \a");                  //Googling is fun

//Building a Basic Calculator
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Answer: %f", num1 + num2);

//Building a Mad Libs Game
    char color [20];
    char pluralNoun[20];
    char food[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural-noun: ");
    scanf("%s", pluralNoun);
    printf("Enter something you can eat: ");
    scanf("%s", food);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", food);

//Arrays
    int luckyNumbers[] = {4, 7, 15, 16, 23, 42};
    luckyNumbers[1] = 8;
    printf("%d\n\n", luckyNumbers[1]);

    int luckyNumbers2[3];
    luckyNumbers2 [0]= 1;
    printf("%d", luckyNumbers2[0]);

//Functions
    sayHi("Mike", 40, 'A');
    sayHi("Tom", 23, 'B');
    sayHi("Oscar", 70, 'C' );           //Tried adding an extra variable. It worked. Whaddayaknow

//Return Statements
    printf("Return Statement Answer: %f" , cube(3.0));

//If Statements
    printf("Biggest number is %d\n", max(1, 2, 3));

    if(3 > 2 || 2>5){
        printf("True");
    } else {
        printf("False");

//Building a Better Calculator
    double cNum1;
    double cNum2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &cNum1);
    printf("Enter operator: ");
    scanf(" %c", &op);              //Remember space
    printf("Enter a number: ");
    scanf("%lf", &cNum2);

    if(op == '+'){
        printf("%f", cNum1 + cNum2);
    } else if(op == '-'){
        printf("%f", cNum1 - cNum2);
    } else if(op == '*'){
        printf("%f", cNum1 + cNum2);
    } else if(op == '/'){
        printf("%f", cNum1 / cNum2);
    } else {
        printf("Invalid Operator, you suck");
    }

//Switch Statement
    char grade = 'd';
    switch (grade)
    {
    case 'a':
        printf("You are perfect");
        break;
    case 'b':
        printf("You did alright");
        break;
    case 'c':
        printf("You suck monkey balls");
        break;
    default:
        printf("Doesn't compute");
    }



//Structs
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy ( student1.name, "John Mogensen");                   //Can't call a string, since it's an array of characters
    strcpy ( student1.major, "Vocalist");

    struct Student student2;
    student2.age = 55;
    student2.gpa = 1.1;
    strcpy ( student2.name, "Ingeline solo");
    strcpy ( student2.major, "also Vocalist too");

    printf("%f\n", student1.gpa);
    printf("%d\n", student1.age);
    printf("%s\n", student1.name);
    printf("%s\n", student1.major);

    printf("\n");

    printf("%f\n", student2.gpa);
    printf("%d\n", student2.age);
    printf("%s\n", student2.name);
    printf("%s\n", student2.major);



//While loops
    int index = 2.0;
    char xByte[] = "MegaBytes";
    do{
        printf("%d %s\n",index, xByte);
        index = index*2;
    }while(index <=1024);                           //Here I actually made something and solved some problems

    index = index / 1024;                           //This was placed wrong, kind of reset the whole ting
    strcpy (xByte, "GigaByte");                     //This needed to be strcpy - memory allocation is fun!

    do{
        printf("%d %s \n", index);
        index = index*2;
    }while(index <=1024);                           //Keep building on this, from a list of "byte types"


//Building a guessing game
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess !=secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;                           //Initial typo: An equal sign too much "=="
        }
    }
    if(outOfGuesses == 1){
        printf("\nYou are out of guesses\n");
    }else {
        printf("\nYou win!\n");
    }



//Building a guessing game Bastard
int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;
    int outOfGuessesFinals = 0;
    int firstRoundLost = 0;

    while(guess !=secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;                           //Initial typo: An equal sign too much "=="
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
            while(guess !=secretNumber && outOfGuessesFinals == 0){
            if(guessCount < guessLimit){
                printf("Enter a number: ");
                scanf("%d", &guess);
                guessCount++;
            } else {
                outOfGuessesFinals = 1;                           //Initial typo: An equal sign too much "=="
            }
        }
    }
    if(outOfGuesses == 0 && outOfGuessesFinals == 0){
        printf("\n\n\n               You are the winner of everything!\n");
    } else if (firstRoundLost == 0){
        printf("\nYou are out of guesses, but at least you won the first round\n");
    }else {
        printf("\n\n\n\n\n Can I get rid of this line?");                               //Can I get rid of this line?
    }
    printf("\n\n\n\n\n");


   /* while (namesOk !=1 ){  //If you input more characters, i repeats, why?
            printf("One or two player game? "); //The scanf function is often the first glimpse a student has
            scanf("%d", &numberOfPlayers);      //of the requirement to pass by pointer, when a called function
            getchar(); //Why do I do this?      //needs to alter the contents of a caller’s variable
            if (numberOfPlayers == 1){
                printf("Player 1, enter your name: ");          //Add ForceUpperCase
                fgets(PlayerName,20,stdin);
                namesOk = 1;
            }else if (numberOfPlayers == 2) {
                printf("Player 1, enter your name: ");
                fgets(player1,20,stdin);
                printf("Player 2, enter your name: ");
                fgets(player2,20,stdin);
                namesOk = 1;                    //Use bolean?
                //if("player1" = "player2"){
                //    printf("You both have the same name? Well that's stupid, so now player 2's name is DerpyMcDerpFace");
                //}  Doesn't work
            } else {
                printf("\n\nWhat part of enter 1 or 2 was unclear to you? Try again!\n\n");
            }
    }// Removed code saved for posterity


//For loops
    int i = 1;
    while (i <= 5){
        printf("%d\n", i);
        i++;
    }

    //int i = 1;
    for(i = 1; i <= 5; i++){            //Does the same
        printf("%d\n", i);
    }

    int i = 1;
    while (i <= 5){
        printf("%d\n", i);
        i++;

        int i = 1;
        for(i = 1; i <= 5; i++){
            printf("%d\n", i);                          //Misplaced " { " - but why does it create the sequence 1 12345 2 12345 3 12345 etc? Shouldn't it be an endless loop?
        }                                               //Edit: I see it now!
    }                                                   //Edit: I don't see it??
                                                        //Edit: I see it now!! "Variables created inside of while loops are local to the while loops body"
                                                        //Comment on this https://stackoverflow.com/questions/46884388/is-it-ok-to-use-the-same-variable-name-in-loops
                                                        //Edit: Now I again don't see it




//2D arrays & Nested loops

    int nums[4][3] = {                            //Two loops, width and hight of array
                    {1, 2},                       //Specify index positions and element inside
                    {3, 4},                       //Calling a non existent index position huh? 47?
                    {5, 6},
    //                {7, 8, 9},
                    };
    nums[3][0]=7;
    nums[3][1]=8;
    nums[3][2]=9;
    //printf("%d", nums[3][3]);

    //for(nums = [0][0]; nums <= 5; nums++){        //This clearly didn't work
    //    printf("%d\n", nums);

    int i, j, k = 0, l = 0; //Just declaring, not giving values (First two)
    for(i = 0; i < 4; i++){ //The update expression i++ is updated after running the loop body
        for(j = 0; j < 2; j++){
                k++;
            printf("Element: %d - ", nums[i][j]);
            printf(" Host loop count: %i - i = %i, j= %i\n",k , i, j);
            }
        l++;
        printf("              NESTED loop count: %i -  i = %i, j= %i\n",l , i, j);
        printf("\n");
        }


//Memory Addresses
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("Age: %p\nGpa: %p\nGrade: %p", &age, &gpa, &grade);


//Pointers

    int age = 30;
    int * pAge = &age         Storing the memory address
    double gpa = 3.4;
    double * pGge = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("Age's memory address: %p\n", &age);



//Dereferencing pointers
    int age = 30; //OMFG he explained it in a way that made me want to kill myself
    int *pAge = &age;

    printf("%d", *&*&age);


//Writing  Files
    //FILE * fpointer = fopen("employees.txt", "w");
    //fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    //fclose(fpointer);

    FILE * fpointer = fopen("employees.txt", "a");
    fprintf(fpointer, "\nAdded this line to the file yay Kelly, Customer Service");
    fclose(fpointer); //Crap didn't work, because I added "" - Why?

General ignore */


//Reading Files
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");
    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s", line);             //There is something satisfying about pulling information out of a file


    fclose(fpointer);
    return 0;
}




/*

void sayHi (char fName[], int fAge, char fChar){
    printf("Hello %s, I'm a function that has been called %d years ago - And here's an extra letter: %c\n", fName, fAge, fChar);
}

double cube(double fdNum){
    double result = fdNum * fdNum * fdNum;
    return result;
    //return fdNum ' fdNum ' fdNUM; Shorter way to do the same

}
*/







