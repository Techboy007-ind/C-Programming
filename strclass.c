#include <stdio.h>
void fun();
int main(){
    fun();
    fun();
    return 0;

}

void fun(){ 
    register int x = 5;
    ++x;
    printf("%d\n",x);
}