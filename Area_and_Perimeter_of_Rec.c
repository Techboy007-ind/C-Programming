#include <stdio.h>
int main(){
    float l , b;
    printf("Enter the length of the rectangle : ");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f",&b);
    float area = l*b;
    float perimeter = 2*(l+b);
    printf("The area of rectangle is : %.2f\n",area);
    printf("The perimeter of rectangle is : %.2f",perimeter);

}