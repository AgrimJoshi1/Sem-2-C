//Write a program to check whether two nums are equal or not
#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter numbers");
    scanf("%d %d", &num1,&num2);
    if (num1==num2){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}