#include <stdio.h>
int main(){
    struct student{
        int roll_no;
        char name[80];
        int fees;
        char DOB[80];
    };
    struct student stud[80];
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the roll number of student %d: ",i+1);
        scanf("%d",&stud[i].roll_no);
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",stud[i].name);
        printf("Enter the fees of student %d: ",i+1);
        scanf("%d",&stud[i].fees);
        printf("Enter the DOB of student %d: ",i+1);
        scanf("%s",stud[i].DOB);
    }
    printf("Student details:\n");
    for(i=0;i<n;i++){
        printf("Student %d:\n",i+1);
        printf("Roll No: %d\n",stud[i].roll_no);
        printf("Name: %s\n",stud[i].name);
        printf("Fees: %d\n",stud[i].fees);
        printf("DOB: %s\n",stud[i].DOB);
    }
    return 0;
}