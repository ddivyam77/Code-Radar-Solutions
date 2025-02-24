#include <stdio.h>
#include <string.h>  // Include for strcmp()

int main() {
    int a, b;
    char c[5];

    scanf("%d %d %s", &a, &b, c);  // Corrected input

    if (strcmp(c, "+") == 0) {   // Use strcmp() for string comparison
        printf("%d", a + b);
    } 
    else if (strcmp(c, "-") == 0) {
        printf("%d", a - b);
    } 
    else if (strcmp(c, "*") == 0) {
        printf("%d", a * b);
    } 
    else if (strcmp(c, "/") == 0) {
        if (b != 0) {
            printf("%d", a / b);
        } else {
            printf("error");
        }
    } 
    else {
        printf("error");
    }

    return 0;
}