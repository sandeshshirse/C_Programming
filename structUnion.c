#include <stdio.h>

struct A {
    int x;
    char y;
};

union B {
    int x;
    char y;
};

int main() {
    printf("Size of structure: %lu\n", sizeof(struct A));
    printf("Size of union: %lu\n", sizeof(union B));
    return 0;
}
