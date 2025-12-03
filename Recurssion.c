#include<stdio.h>
int gcd(int,int);
int main(){
    int a,b,result;
    printf("Enter two numbers in ascending order: ");
    scanf("%d%d",&a,&b);
    result = gcd(a,b);
    printf("GCD of the given two numbers is %d\n",result);
    return 0;
}

int gcd(int x,int y){
    if(y == 0)
        return x;
    return gcd(x,x%y);
}

