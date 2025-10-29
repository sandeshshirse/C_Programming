#include <stdio.h>

int main() {
    double n1, n2;
    char op;

    printf("enter first number: ");
    scanf("%lf", &n1);

    printf("enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("enter second number: ");
    scanf("%lf", &n2);

    switch (op) {
        case '+':
          printf("Result: %.2lf\n", n1 + n2);
            break;

        case '-':
              printf("Result: %.2lf\n", n1 - n2);
            break;

        case '*':
               printf("Result: %.2lf\n", n1 * n2);
             break;

        case '/':
           if (n2 != 0) {
                  printf("Result: %.2lf\n", n1 / n2);
            } else {
                printf("Error: Dividing by zero is not allowed.\n");
            }
            break;

      default:
              printf("Error: Invalid operator entered.\n");
               break;
    }

    return 0;
}