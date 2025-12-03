#include <stdio.h>
int main(){
    int a , b , c;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the Second number :");
    scanf("%d",&b);
    printf("Enter the Third number :");
    scanf("%d",&c);
    int result = a + b + c;

    printf("The sum of three numbers is : %d",result);
}