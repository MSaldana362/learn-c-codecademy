#include<stdio.h>

// Lesson 05: Loops

/* Topics Covered:
        Types of Loops
        while Loops
        do-while Loops
        for Loops
        Loop Keywords
        Rewriting Loops
*/

int main(){

    // Guess the Number
    int guess;
    int tries = 0;
    int retries = 10;
    int number = 5;

    printf("I'm thinking of a number between 1 and 10\n");
    printf("Try to guess the number: ");
    scanf("%d", &guess);

    while ( (guess != number) && (tries < retries) ) {
        printf("\nYou have %i tries remaining...\n",retries-tries);
        printf("Wrong guess. Try again: ");
        scanf("%d", &guess);
        tries++;
    }

    if (guess == number) {
        printf("\nThe number is %i\n",number);
        printf("Your guess was correct!\n");
    }


    // while Loop
    int i = 0;
    while (i <= 10) {
        printf("%i\t%i\n",i,i*i);
        i++;
    }

    // do-while Loop
    
}