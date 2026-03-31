#include <stdio.h>
int main(){
    int a=3,b=5;
    int *pnum;
    pnum=&a;
    printf("%d",*pnum);
    pnum=&b;
    printf("\n%d",*pnum);
    return 0;
}