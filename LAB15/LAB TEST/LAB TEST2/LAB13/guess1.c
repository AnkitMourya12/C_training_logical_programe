// /*Ankit and Aditya gupta test the final code and make executable file (.exe) of this game 
// and I try to use graphics in this game remember that exe file is for backup not a final project
// if i am unable to make that then that executable file is our final project*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void intro_screen()
// {
// 	/*function for intro screen i want to assighn this work to Aditya Gupta, Ayush gupta
// 	in this function you have to make function which pop up intro screen and 
// 	after taking input screen just clear the output screen and return cursor to main*/ 
// 	//second team Anzal, Harsh you have to do same task better work will be choosen
//     printf("*****************************************\n");
//     printf("*                                       *\n");
//     printf("* Welcome to guess the number Game!     *\n");
//     printf("*                                       *\n");
//     printf("*****************************************\n");
//     printf("\n");
//     printf("Press Enter to continue...");
//     getchar();  // Wait for the user to press Enter

// }
// int level_choosing()
// {
// 	/*Govind, Abhishek you have to just make a function which choose the level and return 
// 	1 as easy 2 as medium 3 as hard and 4 for exit*/
// 	//same task i assighn to archit and kaushal together try to perform same task
//      int choice;

//     printf("Level Selection:\n");
//     printf("1. Easy\n");
//     printf("2. Medium\n");
//     printf("3. Hard\n");
//     printf("4. Exit\n");
//     printf("\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice);

//     return choice;
// }
// int generate_random_number(level)
// {
// 	/*random function which i complete works accordingly level if level is 1 then it return random 
// 	number between 1 to 100 and if it is medium then this number is from 100 to 1000 and if it is hard then this 
// 	limit is from 1 to 10000*/
// 	if (level==1)
// 	{
// 		int min = 1;
//     	int max = 100;
//     	srand(time(NULL));
//     	int random_number = (rand() % (max - min + 1)) + min;
//     	return random_number;
// 	}
// 	else if (level==2)
// 	{
// 		int min = 100;
//     	int max = 1000;
//     	srand(time(NULL));
//     	int random_number = (rand() % (max - min + 1)) + min;
//     	return random_number;
// 	}
// 	else
// 	{
// 		int min = 1;
//     	int max = 10000;
//     	srand(time(NULL));
//     	int random_number = (rand() % (max - min + 1)) + min;
//     	return random_number;
// 	}
// }
// void game_screen(level,number)
// {
//      printf("Game Screen\n");
//     printf("Level: %d\n", level);
//     printf("Number: %d\n", number);
// 	/*this was final output screen this function executes according sir shows 
// 	and this function is assighn to Ankit as he is best in his field */
// }
// int main()
// {
// 	int level, number;
// 	intro_screen();
// 	level=level_choosing();
// 	if (level==4)
// 	{
// 		exit(0);
// 	}
// 	number=generate_random_number(level);
// 	game_screen(level,number);
// }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void intro_screen() {
    printf("Welcome to the Game!\n");
    printf("Press Enter to continue...");
    getchar();  // Wait for the user to press Enter
    // Clear the screen (platform-specific)
    #ifdef _WIN32
        system("cls");  // For Windows
    #else
        system("clear");  // For Unix/Linux
    #endif
}

int level_choosing() {
    int choice;
    printf("Level Selection:\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int generate_random_number(int level) {
    int min, max;

    if (level == 1) {
        min = 1;
        max = 100;
    } else if (level == 2) {
        min = 100;
        max = 1000;
    } else {
        min = 1;
        max = 10000;
    }

    srand(time(NULL));
    int random_number = (rand() % (max - min + 1)) + min;
    return random_number;
}

void game_screen(int level, int number) {
    int attempts;
    if(level==1)
    
         attempts=8;
    
    if(level==2)
    {
       attempts=6;
    }
    if(level==3)
    {
      int attempts=5;
    }
    
    printf("Game Screen\n");
    printf("Level: %d\n", level);
    printf("Number: %d\n", number);
   // printf("Guess the number between %d and %d\n", min, max);
 int guess;
 int count=0;
        
    do {
        
        printf("You have ony %d chance to play",attempts);
        printf("Enter your guess: ");

        scanf("%d", &guess);
        count++;
        if(attempts==0)
        {
            printf("\n better luck next");
            return -1;
        }

        if (guess == number ) {
            printf("Congratulations! You guessed the number correctly in %d attempts.\n", attempts);
            return;
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } 
        
        
        else {
            printf("Too high! Try again.\n");
        }
    } while (count>=attempts);
}
    // Add the game logic and display here
    // Implement the gameplay based on the selected level and generated number


int main() {
    
    int level, number;
    intro_screen();
    level = level_choosing();
    if (level == 4) {
        printf("Exiting the game.\n");
        return 0;
    }
    number = generate_random_number(level);
    game_screen(level, number);

    return 0;
}

