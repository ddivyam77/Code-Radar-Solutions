#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a * a == b) {  // Checks if 'a' squared equals 'b'
        printf("Yes");
    } else {
        printf("No");
    }

    return 0; // Good practice to include return statement
}