#include <stdio.h>

int main()
{
    // The number of students in the class
    const int CLASS_SIZE = 50; 
    
    // Array to hold the marks of 50 students. 
    // You would typically read these marks from user input or a file.
    int marks[50] = {85, 92, 78, 95, 88, 70, 99, 81, 87, 93, 
                     75, 80, 84, 90, 86, 79, 94, 82, 91, 73, 
                     89, 96, 77, 98, 83, 72, 97, 76, 88, 92, 
                     85, 90, 78, 95, 81, 74, 99, 84, 87, 93, 
                     75, 80, 86, 91, 82, 79, 94, 88, 96, 70}; 

    int highest_mark = 0;
    int i;

    // Initialize highest_mark with the first student's mark
    if (CLASS_SIZE > 0) {
        highest_mark = marks[0];
    }

    // Loop through the array to find the maximum mark
    for (i = 1; i < CLASS_SIZE; i++) {
        if (marks[i] > highest_mark) {
            highest_mark = marks[i];
        }
    }

    printf("The highest mark in Mathematics (Topper's Mark) is: %d\n", highest_mark);

    return 0;
}