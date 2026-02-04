#include <stdio.h>


typedef enum {
    IDLE,
    WALKING,
    RUNNING,
    JUMPING
} PlayerState;

int main() {
   
    PlayerState currentState = RUNNING;

    printf("Current Action: ");

    switch (currentState) {
        case IDLE:
            printf("The player is standing still.\n");
            break;
        case WALKING:
            printf("The player is moving at a steady pace.\n");
            break;
        case RUNNING:
            printf("The player is moving fast!\n");
            break;
        case JUMPING:
            printf("The player is in the air.\n");
            break;
        default:
            printf("Unknown state.\n");
    }

    return 0;
}
