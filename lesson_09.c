#include<stdio.h>

// Lesson 09: Structures

/* Topics Covered:
        Defining Structures with struct
        Initializing Structures with struct
        Custom Data Types with Structures
        Grouping Data Types with Structures
        Accessing Member Variables with Dot Notation
        Structure Member Variables
        Structure Type Pointers
        Accessing Member Variables with Arrow Notation
        Passing Structures to Functions
        Passing Structure Pointers to Functions
*/

struct Animal {
    char name[40];
    int age;
};

struct Animal addAge(struct Animal pet, int years) {
    pet.age += years;
    return pet;
}

void changeAge(struct Animal* petPointer, int age) {
    petPointer->age = age;
}

int main() {

    // Defining Structures

    /* When we define a structure:
    - The struct keyword initiates the structure type definition
    - The name after struct is the name of the new structure type
    - The curly braces enclose the struct member variables */

    /* Member variables should only be declared and not initialized */

    struct Student {
        char firstName[25];
        char lastName[40];
        int age;
        double gpa;
    };


    // Initializing Structures

    /* Ordered notation */
    struct Student student01 = {"Stephen","Strange",44,2.016};

    /* Unordered notation */
    struct Student student02 = {
        .lastName = "Bond",
        .firstName = "James",
        .gpa = 0.007,
        .age = 32
    };


    // Structure Dot Notation

    /* Dot notation is a C operator that allows you to access and modify
    a member variable of a structure */

    struct Student student03 = {"John","Doe"};
    student03.age = 22;
    student03.gpa = 4.44;

    printf("%s %s, age %i, has a GPA of %f\n",student03.firstName,student03.lastName,
        student03.age,student03.gpa);
    

    // Structure Pointers

    struct Student* studentPointer = &student01;

    /* Dereference using dot notation */
    (*studentPointer).gpa += 0.006;

    /* Dereference using arrow notation */
    studentPointer->age = 45;

    printf("%s %s, age %i, has a GPA of %f\n",student01.firstName,student01.lastName,
        student01.age,student01.gpa);


    // Structures in Functions

    /* When passing a structure to a function:
    - A copy of the structure is made (memory usage is a concern)
    - Modifications made to the structure will not affect the original structure */

    /* When passing a pointer to a structure:
    - Any modifications to the memeber variables will affect the original structure */

    struct Animal pet01 = {"Spud",2};
    struct Animal pet02 = {"Pajamas",1};

    printf("%s is %i years old\n",pet01.name,pet01.age);
    printf("%s is %i years old\n",pet02.name,pet02.age);

    pet01 = addAge(pet01,2);
    printf("\tNow, %s is %i years old\n",pet01.name,pet01.age);

    changeAge(&pet02,3);
    printf("\tNow, %s is %i years old\n",pet02.name,pet02.age);
}