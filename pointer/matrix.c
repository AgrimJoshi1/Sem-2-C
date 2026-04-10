#include <stdio.h>
int main(){
    int i,j,mat[3][3];
    clrscr();
    printf("\n Enter elements of the matrix");
    printf("\n ***********************************");
    for(i = 0; i<3;j++){
        printf("\n mat[%d][%d] = ",i,j);
        scanf("%d", (*(mat + i)+j));

    }

}
printf("\n The elements of the matrix are");
printf("\n ********************************");
for(i = 0;i<3;i++){
    
}
