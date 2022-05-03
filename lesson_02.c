#include<stdio.h>

// Lesson 2: Variables

/* Topics Covered:
        C Variable Names
        Data Types in C
        Setting Variables in C
        Variable Casting in C
*/

int main(){

    // Data Types
    int student_id = 149003256;
    float student_gpa = 3.666;
    double student_tuition = 420.69;
    char student_letter_grade = 'A';

    // Using Parameters with printf()
    printf("Student with ID %i has a GPA of %f.\n",student_id,student_gpa);
    printf("Student with ID %d is in debt $%f\n",student_id,student_tuition);
    printf("This student is an %c average student\n",student_letter_grade);

    /* Note: A float has less precision than a double
            A float takes up less memory (4 vs 8 bytes)
            A double runs faster
    */


    // Constants
    const int STUDENT_BIRTHDATE = 12202020;

    /* Note: It is best practice to use all upper case letters
            when declaring a constant.
    */
    
    
    // Casting
    double test_score = 96.69;
    int display_score = 0;
    display_score = (int) test_score;
    printf("The original score was %f, but we display it as %i\n",test_score,display_score);

    // More on Casting
    char new_letter_grade;
    int source_int = 97;
    new_letter_grade = (char) source_int;
    printf("Started with %i, ended with %c\n",source_int,new_letter_grade);
}