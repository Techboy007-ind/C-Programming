#include <stdio.h>
#define PI 3.14
int main(){
    int a = 5;
    #ifdef PI
        printf("Area = %f",PI*a*a);
    #else
        printf("The number us odd");
    #endif
    return 0;
}
