#include <iostream>
#include <cstring>
using namespace std;

struct student {
    char name[50];
    char* name1[50]; // Pointer array for names

    double marks;
    int roll_number;
};

int main() {
    student s;
    strcpy(s.name, "Amit Kumar");
    s.name1[0] = new char[strlen("Sujal Kumar") + 1]; // Allocate memory for the first pointer
    strcpy(s.name1[0], "Sujal Kumar"); // Copy the string into the allocated memory
    s.marks = 99.86;
    s.roll_number = 34;

    cout << "Name : " << s.name << endl;
    cout << "Name : " << s.name1[0] << endl; // Access the first pointer in the array
    cout << "Marks : " << s.marks << endl;
    cout << "Roll Number : " << s.roll_number << endl;

    delete[] s.name1[0]; // Free allocated memory
    return 0;
}