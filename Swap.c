#include <stdio.h>
int main(){
    int num1 , num2;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    printf(" Before swap the numbers are %d %d\n",num1,num2);

    num1 = num1 + num2;                      
    num2 = num1 - num2;                       
    num1 = num1 - num2;
    printf(" After swap the numbers are %d %d",num1, num2);
}