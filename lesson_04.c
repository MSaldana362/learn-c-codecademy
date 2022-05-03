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
}