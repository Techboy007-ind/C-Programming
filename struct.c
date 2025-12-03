// Define a structre named time , with members hours, minutes and seconds
// WAP to take input of two times add them and display the result in proper time format
#include <stdio.h>
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int main(){
    struct Time T1;
    struct Time T2;
    struct Time T3;

    printf("Enter the seconds of T1: ");
    scanf("%d",&T1.seconds);
    printf("Enter the minutes of T1: ");
    scanf("%d",&T1.minutes);
    printf("Enter the hours of T1: ");
    scanf("%d",&T1.hours);

    printf("Enter the seconds of T2: ");
    scanf("%d",&T2.seconds);
    printf("Enter the minutes of T2: ");
    scanf("%d",&T2.minutes);
    printf("Enter the hours of T2: ");
    scanf("%d",&T2.hours);

    T3.seconds = T1.seconds + T2.seconds;
    T3.minutes = T1.minutes + T2.minutes + T3.seconds/60;
    T3.hours = T1.hours + T2.hours + T3.minutes/60;
    T3.seconds %= 60;
    T3.minutes %= 60;

    printf("Net time = %d:%d:%d",T3.hours,T3.minutes,T3.seconds);
    return 0;
}
