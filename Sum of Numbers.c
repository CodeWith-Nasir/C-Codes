#include <stdio.h>

int main() {
    int number, sum = 0;
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);

    printf("The sum of the numbers is: %d\n", sum);
    return 0;
}