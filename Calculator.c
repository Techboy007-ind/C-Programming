#include <stdio.h>

int main()
{
    float num1,num2;
    char operation;
    printf("Enter the operation : ");
    scanf("%c",&operation);
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    
    if(operation == 'a'){
        printf("%f",num1 + num2);
    }
    else if(operation == 'b'){
        printf("%f",num1 - num2);
    }
    else if(operation == 'c'){
        printf("%f",num1 * num2);
    }
    else if(operation == 'd'){
        printf("%f",num1 / num2);
    }else{
        printf("enter the valid operation");
    }
    

    return 0;
}