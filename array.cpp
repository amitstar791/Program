#include <iostream>
using namespace std;

// Function to calculate average of students
double average(int scores[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {
    // Declare an array of integers
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Size of arr: " << sizeof(arr)/sizeof(arr[0]) << endl;

    // Print the elements of the array
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
    
    // Add a new element at the index 3
    arr[3] = 100;

    // Example usage for 20 students
    int studentScores[20] = {85, 90, 78, 92, 88, 76, 95, 89, 84, 91, 87, 93, 80, 82, 77, 86, 94, 81, 79, 83};
    cout << "Average score of 20 students: " << average(studentScores, 20) << endl;

    cout << "After updating index 3:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
    // Delete a existing element at index 2
    for(int i = 2; i < 4; i++) {
        arr[i] = arr[i + 1];
    }
    arr[4] = 0;  // Optional: clear the last element
    // Print the array after deletion
    cout << "After deletion at index 2:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;



    }

    // Insert a new element at index 2
    for(int i = 4; i > 2; i--) {
        arr[i] = arr[i - 1];
    }
    arr[2] = 200;
    
    // Print the array after insertion
    cout << "After insertion at index 2:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}