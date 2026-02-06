#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 5.5;
    printf("Float: %.2f\n", d.f);

    return 0;
}
