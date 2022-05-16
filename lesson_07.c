#include<stdio.h>
#include<string.h>

// Lesson 07: Pointers

/* Topics Covered:
        What is a Pointer?
        Declaring Pointers
        Accessing Memory Address
        Dereferencing Pointers
        Incrementing and Decrementing Pointers
        Accessing Arrays
*/

int main() {

    // Pointers

    /* What is a Pointer?
    A byte of memory can be accessed using a pointer.
    A pointer containing the address of a variable is said to point
    to that variable.
    A pointer to a variable is the address of the first of the bytes
    reserved in memory for that variable */

    /* Syntax of a pointer:
    dataType* nameOfPointer;
    dataType *nameOfPointer; */

    int intVar;
    int *intPtr = &intVar;
    printf("%p\n",intPtr);

    /* Output is a hexidecimal integer that represents the address
    in memory that is storing a variable of type int */


    // The Reference Operator

    /* We use the reference operator, &, to obtain the address of
    a variable. The syntax for this is:
    &variableName; */

    int x = 420;
    int *xPtr = &x;

    printf("%p\n",&x);
    printf("%p\n",xPtr);

    /* A pointer may be reassigned a new address so long as type
    consistency is maintained */

    int a = 0;
    int b = 1;
    int *abPtr;
    printf("Address of a: %p\n",&a);
    printf("Address of b: %p\n",&b);

    abPtr = &a;
    printf("\tAddress of pointer: %p\n",abPtr);

    abPtr = &b;
    printf("\tAddress of pointer: %p\n",abPtr);


    // The Deference Operator

    /* The data contained in the memory address pointed to by a pointer
    can be accessed using the dereference operator. The syntax is:
    *pointerName; */

    int m = 69;
    int *mnPtr = &m;
    int n = *mnPtr;
    printf("m is %i and n is %i\n",m,n);

    /* If the value of a dereferenced pointer is changed, the value
    of the corresponding variable will change in the same way */

    int y = 100;
    printf("\ty is %i\n",y);

    int *yPtr = &y;
    *yPtr = 200;
    printf("\ty is %i\n",y);


    // Pointer Arithmetic

    /* Pointer Arithmetic Operations:
    Only addition and subtraction are allowed.
    Adding to a pointer means the pointer will point to some new address.
    Addition is only valid when adding an integer to a pointer.
    You cannot add two or more pointers together.
    Adding n moves the pointer by n * (size of data type in bytes) */

    double *dblPtr;
    printf("%p\n",dblPtr);

    dblPtr += 1;
    printf("%p\n",dblPtr);
    dblPtr += 1;
    printf("%p\n",dblPtr);
    dblPtr += 2;
    printf("%p\n",dblPtr);


    // Pointers and Arrays

    /* Arrays are contiguous blocks of memory. If we have a pointer to the
    first element, we can use pointer arithmetic to access the rest of
    the array */

    int arr[] = {1,2,3,4,5};
    char str[] = "Hello There";

    int *arrPtr = &arr[4];
    for (int i = 0; i < 5; i++) {
        printf("%i",*arrPtr);
        *arrPtr = -1 * *arrPtr;
        printf("\t%i\n",*arrPtr);
        arrPtr--;
    }

    char *strPtr = &str[0];
    for (int i = 0; i < strlen(str); i++) {
        printf("%c",*strPtr);
        *strPtr = '*';
        printf("\t%c\n",*strPtr);
        strPtr++;
    }

    // Be very careful when working with pointers!
}
