//WAP to enter a hexadecimal number, calculate and display the decimal equivalent of the number 
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char hexa[100];
    scanf("%s",hexa);
    int dec=0,len,val;

    len=strlen(hexa);
    for(int i=0;i<len;i++){
        char ch=hexa[i];
        if (ch >= '0' && ch <= '9')
            val = ch - '0';
        else if (ch >= 'A' && ch <= 'F')
            val = ch - 'A' + 10;
        else if (ch >= 'a' && ch <= 'f')
            val = ch - 'a' + 10;
        else {
            printf("Invalid hexadecimal number.\n");
            return 1;
        }

        dec = dec * 16 + val;

    }

    printf("Decimal equivalent = %d\n", dec);

    return 0;
    }

    