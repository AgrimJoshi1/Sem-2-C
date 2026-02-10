//write a program and show the diff between int shortint longint using size and range
#include <stdio.h>
#include <math.h>

int main() {
    int bits;

    /* short int */
    bits = sizeof(short int) * 8;
    printf("short int:\n");
    printf("  Size  : %lu bytes\n", sizeof(short int));
    printf("  Range : %.0f to %.0f\n\n",
           -pow(2, bits - 1),
           pow(2, bits - 1) - 1);

    /* int */
    bits = sizeof(int) * 8;
    printf("int:\n");
    printf("  Size  : %lu bytes\n", sizeof(int));
    printf("  Range : %.0f to %.0f\n\n",
           -pow(2, bits - 1),
           pow(2, bits - 1) - 1);

    /* long int */
    bits = sizeof(long int) * 8;
    printf("long int:\n");
    printf("  Size  : %lu bytes\n", sizeof(long int));
    printf("  Range : %.0f to %.0f\n",
           -pow(2, bits - 1),
           pow(2, bits - 1) - 1);

    return 0;
}