#include <stdio.h>
int main(){
    float tempc;
    scanf("%f",&tempc);
    float tempf = (tempc*9/5) + 32;
    printf("The temperature in Faranheit : %.2f",tempf);
}