#include <stdio.h>
int main(){
    int i;
    double i, j;
    double sum = 1.0;
    double factorial = 1.0;
    for(i=2; i<= 5; i++){
        factorial = factorial*i;
        sum = sum + ((double)(i * i) / factorial);
    }
    printf("Sum of series for 5 terms = %.31f\n",sum);
    return 0;

}