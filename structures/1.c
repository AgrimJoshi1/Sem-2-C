#include <stdio.h>
int main(){
    typedef struct
    {
        char first_name[20];
        char mid_name[20];
        char last_name[20];
    }NAME;

    typedef struct
    {
        int day;
        int month;
        int year;
    
    }DATE;

    typedef struct student
    {
        int r_no;
        NAME name;
        char course[20];
        DATE dob;
        float fees;
    } STUDENT;}