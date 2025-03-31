
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Printing spaces for alignment
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // Increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Decreasing sequence (mirroring)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n"); // Move to next line
    }

    return 0;
}

