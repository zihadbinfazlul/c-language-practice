#include <stdio.h>

int main() {
    int choice;
    int case1 = 0, case2 = 0, defaultCase = 0;

    printf("K nile valo hoy\n");
    printf("1. Akash\n");
    printf("2. Masud\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Thanks for your opinion. Masud and Akash 2 jonei nibe.\n");
            case1 = 1;
            break;

        case 2:
            printf("Thanks for your opinion. Masud and Akash 2 jonei nibe.\n");
            case2 = 1;
            break;

        default:
            printf("mara kha halarpo\n");
            defaultCase = 1;
            break;
    }

    if (case1 == 1 || case2 == 1 || defaultCase == 1) {
        printf("Akash & Masud duitai class nibe, nile battam deya hobe duijonkei\n");
    }

    return 0;
}