#include <stdio.h>
int main(void)
{   // Explicit type conversion 
    int total = 100;
    int actual = 82;
    float percentage = (float) actual/total*100;
    printf("The toatal marks for exam are : %d\n",total);
    printf("The actual marks obtained in the exam : %d\n",actual);
    printf("The percentage obtained in the exam is : %f\n",percentage);
}
