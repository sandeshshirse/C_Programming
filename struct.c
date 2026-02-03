#include <stdio.h>
struct Student {
    char name[50];
    int age;
};
int main(){
struct Student s1 = {"Alice", 20};
printf("%s", s1.name); // Accessing 'name' using the dot operator

return 0;
}
