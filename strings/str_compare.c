//string identical
#include <stdio.h>
#include <string.h>
int main(){
    char str1[10] = "HELLO";
    char str2[10] = "HEY";
    if(strncmp(str1,str2,2)==0){
        printf("\n The two strings are not identical");
    }
    return 0;
}