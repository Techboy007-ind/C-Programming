#include <stdio.h>
int main(){
    float units,bill;
    printf("Enter the no. of units");
    scanf("%f",&units);
    if(units <= 100){
        bill = units*5;
    }
    else if(units <= 200){
        bill = 100*5 + (units - 100)*7;
    }
    else if(units >= 200){
        bill = 100*5+ 100*7 + (units - 200)*10;
    }
    printf("The total bill is : %.2f",bill);
}