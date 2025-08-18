#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int roll_number;
    double marks;
};

int main(){
    struct student s; // Corrected struct declaration
    strcpy(s.name, "Alice"); // Corrected name assignment
    s.roll_number = 7; // Prefixed with 's.'
    s.marks = 99.87; // Prefixed with 's.'

    printf("Name: %s\n", s.name); // Corrected format specifier
    printf("Roll Number: %d\n", s.roll_number); // Prefixed with 's.'
    printf("Marks: %.2lf\n", s.marks); // Corrected format specifier

    return 0;
}