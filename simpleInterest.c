#include <stdio.h>
int main(){
    int Principle; scanf("%d", &Principle);
    int Rate; scanf("%d", &Rate);
    int Time; scanf("%d", &Time);
    float interest = (float) Principle*Rate*Time/100;
    printf("The simple interest is %.2f",interest);
    return 0;

}