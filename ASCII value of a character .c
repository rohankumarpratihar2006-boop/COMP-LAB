#include <stdio.h>

int main() {
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    printf("ASCII value of %c is: %d", a, a);
    return 0;
}