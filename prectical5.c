#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int s = 0; s < i; s++) {
            printf("_ ");
        }
        for (int j = 10 - i; j >= 6; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}