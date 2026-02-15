//print "profit" in the first line and profit amount in the second line if profit is made,"loss". in the first line and loss amount 
//in the second line for loss and "No profit no loss" otherwise.
#include <stdio.h>

int main() {
    float cp, sp;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (cp < 0 || sp < 0) {
        printf("Invalid input");
        return 0;
    }

    if (sp > cp) {
        printf("profit\n");
        printf("%.2f", sp - cp);
    }
    else if (cp > sp) {
        printf("loss\n");
        printf("%.2f", cp - sp);
    }
    else {
        printf("No profit no loss");
    }

    return 0;
}