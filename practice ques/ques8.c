#include <stdio.h>

int main() {
    char bin[100];
    int i = 0, carry = 1;

    printf("Enter binary number: ");
    scanf("%s", bin);


    for (i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0')
            bin[i] = '1';
        else if (bin[i] == '1')
            bin[i] = '0';
    }

    printf("1's Complement : %s\n", bin);


    for (i = i - 1; i >= 0; i--) {
        if (bin[i] == '1' && carry == 1) {
            bin[i] = '0';
        } else if (bin[i] == '0' && carry == 1) {
            bin[i] = '1';
            carry = 0;
        }
    }

    printf("2's Complement : %s\n", bin);

    return 0;
}