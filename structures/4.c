#include <stdio.h>
struct Time {
    int hours;
    int minutes;
};
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result;
    result.minutes = t1.minutes + t2.minutes;
    result.hours = t1.hours + t2.hours;
    if (result.minutes >= 60) {
        result.hours += result.minutes / 60;
        result.minutes = result.minutes % 60;
    }
    return result;
}
int main() {
    struct Time t1, t2, sum;
    printf("Enter first time (hours minutes): ");
    scanf("%d %d", &t1.hours, &t1.minutes);
    printf("Enter second time (hours minutes): ");
    scanf("%d %d", &t2.hours, &t2.minutes);
    sum = addTime(t1, t2);
    printf("Total Time = %d hours %d minutes\n", sum.hours, sum.minutes);
    return 0;
}