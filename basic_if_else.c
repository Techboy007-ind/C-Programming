#include <stdio.h>
int main(){
    float p1,p2,p3;
    scanf("%f",&p1);
    scanf("%f",&p2);
    scanf("%f",&p3);
    float sum = p1 + p2 + p3;
    if (sum <= 100.0){
        printf("Buy the products");
    }else{
        printf("exit");
    }

}