// first part- swap using 3 var, b) without using third variable
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d %d", a, b);
    return 0;
}