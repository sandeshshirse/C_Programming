#include <stdio.h>
#include <conio.h>

int main() {

    struct {
        char name[30];
        int roll;
        float marks;
    } s;   

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);

    getch();
    return 0;
}
