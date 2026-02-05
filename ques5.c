#include <stdio.h>

int main() {
    int num, temp, temp2;
    int digit, count = 0, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;
    temp2 = num;

    // Handle 0 explicitly
    if (num == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            count++;
            temp /= 10;
        }
    }

    // Calculate Armstrong sum
    while (temp2 != 0) {
        digit = temp2 % 10;

        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }

        sum += power;
        temp2 /= 10;
    }

    if (sum == num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}