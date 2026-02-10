#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid triangle\n");
    }
    else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle\n");
    }
    else {
        printf("Valid triangle\n");

        if (a == b && b == c) {
            printf("Type: Equilateral triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Type: Isosceles triangle\n");
        }
        else {
            printf("Type: Scalene triangle\n");
        }
    }

    return 0;
}