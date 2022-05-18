#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<time.h>

// Lesson 08: Functions

/* Topics Covered:
        Functions in C
        Built-In Function in C
        Calling Functions
        Storing A Return Value
        Function Signature
        Return Type void
        Function Return Value
        Function Parameters
        Function Protypes
*/

void sayTheLine(void) {
    printf("Hello There!\n");
}

int main() {

    // Calling a Function

    /* The inputs of a function are known as the arguments of the function.
    Some functions take no arguments, one argument, or multiple arguments.
    
    Functions can return their output and have it be used further in the code
    */

    printf("1 argument...\n");
    int i  = sqrt(4);
    printf("%i arguments...and a returned value...\n",i);


    // Library Functions

    /* There are many useful functions in the C standard libraries.
    To access these functions, we need to include header files */

    srand(time(NULL));
    int randomNumber = rand();
    printf("Random number: %i\n",randomNumber);

    int rollDice = rand() % 6 + 1;
    printf("Roll of dice: %i\n",rollDice);


    // Defining Functions

    /* The function signature tells us the following:
    - The function name
    - How many parameters (inputs) and their types
    - What type of return variable is to be expected */

    /* If a function is not going to return any value, void is used */

    /* If a function has no parameters, void should be in place of
    any parameters */

    /* The signature and the body are the two parts we need to create
    our own functions */

    sayTheLine();
}