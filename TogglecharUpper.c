#include <stdio.h>
int main(){
    char ch;
    printf("Enter the Upper/Lower case alphabet : ");
    scanf("%c",&ch);
    char result = ch ^ 32;
    printf("Alphabet after toggling : %c",result);
    
}
