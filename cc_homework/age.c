#include <stdio.h>

int main() {
    int birth_year, current_year, age;

    printf("Enter your birth year: ");
    scanf("%d", &birth_year);

    printf("Enter the current year: ");
    scanf("%d", &current_year);

    age = current_year - birth_year;

    printf("Your age is %d years\n", age);

    return 0;
}