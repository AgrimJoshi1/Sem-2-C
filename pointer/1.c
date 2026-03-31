#include <stdio.h>
int main(){
    int num, *pnum;
    pnum=&num;
    printf("\n Enter the number: ");
    scanf("%d",&num);
    printf("\n the number entered is %d",*pnum);
    printf("\n The address of number in memory i : %p",&num);
}