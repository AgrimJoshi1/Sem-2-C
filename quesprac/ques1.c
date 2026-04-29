//WAP to print the reverse of a number and sum of its digits
#include <stdio.h>
int main(){
    int num; 
    int rev = 0;
    int sum = 0; 
    int digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original = num;
    while(num != 0){
        digit = num % 10;
        rev = rev * 10 + digit;
        sum += digit;
        num /= 10;
    }
    printf("Reverse of %d is %d\n", original, rev);
    printf("Sum of digits of %d is %d\n", original, sum);
    return 0;
}
    
