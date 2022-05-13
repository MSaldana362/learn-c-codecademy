#include<stdio.h>

// Lesson 06: Arrays

/* Topics Covered:
        What is An Array?
        Creating Uninitialized Arrays
        Creating an Initialized Array
        Accessing Array Elements
        First and Last Array Elements
        sizeof()
        Iterating Through Arrays
        Invalid Array Access
        Creating Multidimensional Arrays
        String Length
        Accessing Characters in a String
        Creating Strings
        Null Character
        strlen()
        strcat()
        strcpy()
*/

int main(){

        // Creating and Initializing Arrays

        /* General template for creating uninitialized arrays:
        dataType name[arraySize] */

        // Arrays are static (size of array cannot be changed)

        int a[4];

        /* General template for creating initialized arrays:
        dataType name[] = {firstValue,secondValue,...} */

        int b[] = {1,2,3};
        int c[4] = {2,4,6,8};


        // Array Access and Element Modification

        /* The nth element is at index n-1 */
        
        // Access element
        int F[] = {1,2,3};
        printf("First three elements: %i, %i, %i\n",F[0],F[1],F[2]);

        // Modify element
        F[0] = 100;
        F[1] = 200;
        F[2] = 300;
        printf("New three elements: %i, %i, %i\n",F[0],F[1],F[2]);


        // Looping Through Arrays

        int x_size = 10;
        int x[x_size];

        for (int i = 0; i < x_size; i++) {
                x[i] = (i+1)*10;
        }

        int i = 0;
        while (i < x_size) {
                printf("\t%i\n",x[i]);
                i++;
        }

        
}