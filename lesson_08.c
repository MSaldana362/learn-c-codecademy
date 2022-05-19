#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<time.h>

int upperFunction(int,int);
void lowerFunction(int*);

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

int giveYear(void) {
    int year = 2020;
    return year;
}

int addNumbersJoke(int x, int y) {
    int z = x + y;
    return 21;
    printf("Statement after return will not execute\n");
}

void whyNotDouble(int *ptr) {
    *ptr = *ptr * 2;
}

int upperFunction(int a, int b) {
    lowerFunction(&a);
    int c = a / b;
    return c;
}

void lowerFunction(int *ptr) {
    *ptr = *ptr * 2;
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


    // Function Return Values

    /* Many C types can be used as a function return type such as
    int, double, char, and even pointers.

    The type of value returned inside the function must match the
    type defined in the function signature.

    Once the return statement is executed, the function gives control
    back to the function that called it and no further code within
    the function will be executed */

    printf("It is the year %i\n",giveYear());


    // Function Parameters

    /* Parameters are variable definitions that take place in between
    the parentheses of the function signature. They have a type and
    are given a name to be used inside and only inside the function body.
    
    It is best to put void in between the parentheses if the function
    does not have any parameters */

    int a = 9;
    int b = 10;
    int c = addNumbersJoke(a,b);
    printf("What's %i plus %i? %i!\n",a,b,c);


    // Functions with Pointers

    /* Up until now, when a function receives an argument it makes a copy
    of the argument's value and stores it in the parameter variable. Any
    work that the function does on the parameter variable will not affect
    the original value passed in */

    /* If we want to alter a variable inside a function, we can pass a
    pointer to the variable. This helps save memory */

    int q = 100;
    printf("\tWe begin with %i\n",q);

    int *qPtr = &q;
    whyNotDouble(qPtr);
    printf("\tWe end with %i\n",q);


    // Function Prototypes

    /* Up until now, we've had to make sure a function is declared above
    the line of code from where it is called from.

    A good practice is to define function prototypes at the top of the
    code. This will make the compiler aware of each function signature
    before the entire body of the function is implemented.

    With function prototypes, the compiler cares about three things:
    - The function name
    - The return type
    - The parameter type(s) */

    int p = upperFunction(10,2);
    printf("We get %i\n",p);
}
