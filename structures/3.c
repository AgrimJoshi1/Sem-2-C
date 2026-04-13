#include <stdio.h>
int main(){
    struct student
    {
        int roll_no;
        char name[80];
        int fees;
        int DOB[80];
    };
    struct student stud[50];
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the roll number of student %d: ",i+1);
        scanf("%d",&stud[i].roll_no);
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",stud[i].name);
        printf("Enter the fees of student %d: ",i+1);
        scanf("%d",&stud[i].fees);
        printf("Enter the date of birth of student %d: ",i+1);
        scanf("%s",stud[i].DOB);
}
for( i=0;i<n;i++)
    {
        printf("Roll number of student %d: %d\n",i+1,stud[i].roll_no);
        printf("Name of student %d: %s\n",i+1,stud[i].name);
        printf("Fees of student %d: %d\n",i+1,stud[i].fees);
        printf("Date of birth of student %d: %s\n",i+1,stud[i].DOB);
    }
}
