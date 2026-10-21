#include <stdio.h>

int checkDivisible(int n) {
    if (n % 3 == 0 && n % 5 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkDivisible(num)) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else {
        printf("%d is NOT divisible by both 3 and 5.\n", num);
    }
    return 0;
}