#include <stdio.h>

int main() {
    int num, i;
    char choice;

    do {
        printf("Enter a number to print its table: ");
        scanf("%d", &num);

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("Do you want to print another table? (Y/N): ");
        scanf(" %c", &choice); 

    } while (choice == 'Y' || choice == 'y');

    printf("Program ended.\n");
    return 0;
}

