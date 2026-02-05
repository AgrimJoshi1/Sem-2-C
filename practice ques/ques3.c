// a)write a program to swap 2 values, b) without using third variable
// first part- swap using 3 var 

#include <stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int c= 0;
    c = b;
    b = a;
    a = c ;
    printf("%d",a);
    printf("%d",b);
    return 0;
}