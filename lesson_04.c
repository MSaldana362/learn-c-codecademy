#include<stdio.h>

// Lesson 4: Conditionals

/* Topics Covered:
        Types of Conditionals
        if Statements
        else-if Statements
        else Statements
        Dangling else Statement
        Ternary Operators
        switch Statements
        Operators and Conditionals
*/

int main(){

    // if Statement
    int a = 0;
    int b = 1;
    printf("We set a = %i and b = %i\n",a,b);

    if(a < b){
        printf("\tSo a is less than b\n");
    }

    if(a > b){
        printf("\tSo a is greater than b\n");
    }


    // Working with Operators
    if((a>=0) && (b>=0)){
        if((a==0) || (b==0)){
            if(!(a<0) && !(b<0)){
                printf("\tSo a and b are greater than or equal to zero\n");
            }
        }
    }


    // else Clause
    if (b==0) {
        printf("\tSo b is equal to zero\n");
    } else {
        printf("\tSo b is not equal to zero\n");
    }


    // else if
    if (a > 0) {
        printf("\tSo a is positive\n");
    } else if (a < 0) {
        printf("\tSo a is negative\n");
    } else {
        printf("\tSo a is zero\n");
    }


    // switch Statement
    int number = 10;
    printf("\nMy number is %i\n",number);

    /*
    The break keyword tells the computer to exit the block
    and not execute any more code or check any other cases
    inside the code block.
    */

    switch (number)
    {
    case 1:
        printf("\tNumber is 1\n");
        break;
    
    case 0:
        printf("\tNumber is 0\n");
        break;
    
    default:
        printf("\tNumber is neither 1 or 0\n");
        break;
    }

    /*
    At the end of each switch statement there is a default statement.
    If none of the cases are true, then the code in the default
    statment will run.
    */


    // Ternary Operators
    int x = 10;
    int y = 20;
    printf("\nx = %i and y = %i\n",x,y);

    /* Structure for ternary operator:
    condition ? do something : do something else; */

    int max = (x>y) ? x : y;
    printf("\tMax value is %i\n",max);

    (x>y) ? printf("\tSo x is greater than y\n") : printf("\tSo y is greater than x\n");
}