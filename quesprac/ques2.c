//WAP to enter a decimal number, calculate and display the octal equivalent of the number 
#include <stdio.h>

void decToOctal(int n) {
    int octalNum[32]; // Array to store octal digits
    int i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    // Print in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
}

int main() {
    int n = 33;
    decToOctal(n);
    return 0;
}