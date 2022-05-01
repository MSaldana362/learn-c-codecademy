#include<stdio.h>

// Lesson 3: Operators

/* Topics Covered:
        Mathematical Symbols in C
        Assignment Operators in C
        Comparing Values in C
        Logical Operators in C
*/

int main(){

    // Mathematical operators
    float a = 1;
    float b = 2;
    float c = a + b;
    float d = a - b;
    float e = a * b;
    float f = a / b;

    printf("From numbers %.2f and %.2f, we have the following:\n",a,b);
    printf("\tAddition: %.2f\n",c);
    printf("\tSubtraction: %.2f\n",d);
    printf("\tMultiplication: %.2f\n",e);
    printf("\tDivision: %.2f\n",f);


    // Modulo
    int days_in_a_week = 7;
    int days_that_have_passed = 13;
    int day_of_seven_day_week = days_that_have_passed % days_in_a_week;
    
    // Recall that modulo gives the remainder of division

    printf("\n%i days have passed.\n",days_that_have_passed);
    printf("\tRecall that there are %i days in a week\n",days_in_a_week);
    printf("\tSo we are on day %i of the %i day week\n",day_of_seven_day_week,days_in_a_week);


    // Increment and Decrement
    printf("\nIncrement a and decrement b\n");

    a = 10;
    b = 5;
    printf("\ta is %i and b is %i\n",(int)a,(int)b);

    a++;
    b--;
    printf("\ta is %i and b is %i\n",(int)a,(int)b);


    // Assignment
    float v = 1;
    float w = 2;
    float x = 3;
    float y = 4;
    int z = 5;

    v += 2;
    w -= 2;
    x *= 2;
    y /= 2;
    z %= 2;

    printf("\nStarted with 1, 2, 3, 4, 5\n");
    printf("\t%.2f, %.2f, %.2f, %.2f, %.2f\n",v,w,x,y,(float)z);


    // Comparisons
    printf("\nResults of comparisons:\n");
    if(1 == 1){printf("\tTrue\n");}
    if(1 != 2){printf("\tTrue\n");}
    if(1 < 2){printf("\tTrue\n");}
    if(1 <= 1){printf("\tTrue\n");}
    if(2 > 1){printf("\tTrue\n");}
    if(2 >= 2){printf("\tTrue\n");}


    // Logical Operators
    printf("\nResults of comparisons:\n");

    if(1==1 && 2==2)
    {
        printf("\tTrue\n");
    }

    if(1==2 || 2==2)
    {
        printf("\tTrue\n");
    }

    if(!(1==1))
    {
        printf("\tTrue\n");
    } else {
        printf("\tFalse\n");
    }


    // Order of Operations
    printf("\nCheck online for order of operations\n");
}