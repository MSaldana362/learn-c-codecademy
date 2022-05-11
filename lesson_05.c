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
    int n = 9;
    printf("We want our number to be greater than or equal to 10\n");
    printf("We want to check the least amount of times\n");
    printf("We'll add 1 right away just in case\n");

    do {
        printf("\tIncoming number is %i\n",n);
        n++;
        printf("\tWe added 1 to it to make it %i\n",n);
    } while (n < 10);

    /* Condition is not checked until after the statement gets executed;
    The do-while loop is mostly used when a program wants to do
    something at least once before checking the condition */


    // for Loop
    for (int i = 0; i < 10; i++) {
        printf("Currently at %i\n",i);
    }

    /* There are three parts to a for loop:
        The initialization of a counter
        The condition
        The change in the counter
    
    Statements within the loop will run while condition is met */


    // Breaking Out
    int value = 5;
    int iteration = 0;
    printf("Starting at %i, try to get to 0 within 10 tries\n",value);

    while (iteration < 10) {
        if (value == 0) {
            break;
        }
        printf("\tNumber is %i at try %i\n",value,iteration);
        value--;
        iteration++;
    }

    /* The break keyword allows us to break out of a loop and stop
    it from running any more times.

    A break can help increase the efficiency of a program and help
    minimize its memory uses */


    // Continuing
    for (int i = 0; i < 10; i++) {
        if (i%2 == 0) {
            continue;
        }
        printf("%i is an odd number\n",i);
    }

    /* The continue keyword will immediately skip the rest of the
    statements inside a loop body and continue to the next iteration */
    
}