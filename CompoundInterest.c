#include <stdio.h>
#include <math.h>
int main(){
    int Principle; scanf("%d", &Principle);
    int Rate; scanf("%d", &Rate);
    int Time; scanf("%d", &Time);
    float Amount = Principle* pow((1 + Rate/100.0),Time) ;
    float Comp_interest = Amount - Principle;
    printf("The compound interest is : %.2f",Comp_interest);
    return 0;

}