#include <stdio.h>
#include <math.h>

int main() {
    int num, original, sum = 0, digit, n = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}

