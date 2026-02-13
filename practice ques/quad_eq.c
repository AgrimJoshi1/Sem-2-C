//solve a^2 + b^2 -2ab +c/a-b
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("enter a, b and c: ");
    scanf("%f %f %f", &a,&b,&c);
    float formula = pow(a,2)+pow(b,2) -(2*a*b)+(c/(a-b));
    printf("Answer is %.2f",formula);
    return 0;
}