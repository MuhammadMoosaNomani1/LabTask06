#include <stdio.h>
#include <string.h>

int main() {
    char password[100];

    while (1) {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") == 0) {
            printf("Access granted.\n");
            break;
        } else {
            printf("Incorrect password. Try again.\n");
        }
    }

    return 0;
}

