#include <stdio.h>
int main(){
    int num, *pnum;
    pnum=&num;
    *pnum=10;
printf("\n *pnum=%d",*pnum);
printf("\n num=%d",num);
*pnum=*pnum=1;
printf("\n after increment *pnum=%d",*pnum);
printf("\n after increment num=%d",num);
}
