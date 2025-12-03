#include <stdio.h>

int main() {
    float height1, height2;

    printf("Enter height of person 1: ");
    scanf("%f", &height1);

    printf("Enter height of person 2: ");
    scanf("%f", &height2);

    
    (height1 > height2) 
        ? printf("Person 1 is taller\n") 
        : (height1 < height2) 
            ? printf("Person 2 is taller\n") 
            : printf("Both are of equal height\n");

    return 0;
}
