#include<stdio.h>
#include<string.h>

// Lesson 06: Arrays & Strings

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


        // Length of Array Using sizeof()
        int array[] = {1,2,3,4,5};

        int length_array = sizeof(array)/sizeof(int);
        printf("Length of array: %i\n",length_array);
        
        int length_array_memory = sizeof(array);
        printf("Length of array (memory): %i\n",length_array_memory);

        /* sizeof() returns the total number of bytes occupied
        by the array, regardless of the type of elements */

        /* sizeof() can be applied to any data type to determine
        its size in memory */

        int size_int = sizeof(int);
        int size_float = sizeof(float);
        int size_double = sizeof(double);
        int size_char = sizeof(char);

        printf("\tSize of int: %i\n",size_int);
        printf("\tSize of double: %i\n",size_double);
        printf("\tSize of float: %i\n",size_float);
        printf("\tSize of char: %i\n",size_char);


        // Multidimensional Arrays

        /* An array containing other arrays is known as a
        multidimensional array */

        // Uninitialized
        int matrix_01[3][4];

        // Initialized (only first dimension can be omitted)
        int matrix_02[][3] = {{1,2,3},{4,5,6}};


        // Element Access in Multidimensional Arrays

        /* How to access elements in multidimensional array:
        array[rowNumber-1][columnNumber-1] 
        
        How to find dimensions:
        int rowDimension = sizeof(matrix) / sizeof(matrix[0])
        int columnDimension = sizeof(matrix[0]) / sizeof(dataType) */

        int my_matrix[2][3] = {{1,2,3},{4,5,6}};

        int numRows = sizeof(my_matrix) / sizeof(my_matrix[0]);
        int numCols = sizeof(my_matrix[0]) / sizeof(int);
        printf("Number of rows: %i\n",numRows);
        printf("Number of columns: %i\n",numCols);

        for (int m = 0; m < numRows; m++) {
                for (int n = 0; n < numCols; n++) {
                        printf("\tElement at (%i,%i) is: %i\n",m,n,my_matrix[m][n]);
                }
        }




        // Creating and Initializing Strings

        // Create using initialized array
        char string_01[] = {'H','i',' ','T','h','e','r','e','\0'};

        /* The character \0 is the null terminating character. It
        signifies the end of the string and must be included */

        // Create using string literal
        char string_02[] = "Hello There!";

        /* For a string literal, the null terminating character is
        added implicitly */

        printf("%s\n",string_01);
        printf("%s\n",string_02);


        // Character Access and Modification
        char animal[] = "Cat";
        printf("First letter of %s is %c\n",animal,animal[0]);

        animal[0] = 'R';
        printf("First letter of %s is %c\n",animal,animal[0]);


        // Looping Through Strings

        /* We can use strlen() to determine the length of a string. It
        does not account for the null terminating character
        
        To use strlen(), we must include the string library:
        #include<string.h> */

        char reg_string[] = "loop";
        char rev_string[] = "loop";

        for (int i = 0; i < strlen(reg_string); i++) {
                printf("\tIndex %i: ",i);
                printf("\t%c\n",reg_string[i]);

                int len_string = strlen(reg_string);
                rev_string[i] = reg_string[len_string-1 - i];
        }

        printf("Regular string: %s\n",reg_string);
        printf("Reversed string: %s\n",rev_string);


        // Concatenating Strings

        /* We can concatenate two strings together using strcat()

        A string, src, is appended to the end of another string, dst:
        strcat(dst, src); */

        char s1[] = "What";
        char s2[] = " the";
        char s3[] = " heck?";

        strcat(s1,s2);
        strcat(s1,s3);
        printf("%s\n",s1);


        // Copying Strings

        /* We can copy a string into an empty character array (empty
        string) using strcpy

        A string, src, is copied into another string, dst (empty
        character array, dst, must be greater than or equal to the
        length of the string src):
        strcpy(dst,src); */

        char str_01[] = "Meme School";
        char str_02[strlen(str_01) + 1];

        strcpy(str_02,str_01);
        printf("%s\n",str_02);
}