#include <stdio.h>
void add (int *n);
int main(){
    int num=2;
    printf("\n The value of num before calling the function is %d",num);
    add(&num);
    printf("\n The value of num after calling the function is %d",num);
    return 0;   
}

void add (int *n){
    *n=*n+10;
    printf("\n The value of num inside the called function is %d",*n);
}