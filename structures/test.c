#include <stdio.h>
struct flight{
    char flight_number[80];
    int flight_hour;
    int flight_minutes;
    int flight_duration;
    int price;
    };
int main()
{
    int t;
    scanf("%d", &t);
    struct flight f[t];
    for(int i=0;i<t;i++){
    scanf("%s",f[i].flight_number);
    scanf("%d",&f[i].flight_hour);
    scanf("%d",&f[i].flight_minutes);
    scanf("%d",&f[i].flight_duration);
    scanf("%d",&f[i].price);
    }

    for(int i = 0; i < t; i++) {
    printf("%s ", f[i].flight_number);
    printf("%d ", f[i].flight_hour);
    printf("%d ", f[i].flight_minutes);
    printf("%d ", f[i].flight_duration);
    printf("%d\n", f[i].price);
}
    return 0;
}