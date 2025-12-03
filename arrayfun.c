#include <stdio.h>
int sum(int a[100], int);
int main(){
    int result,i,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int b[n];
    printf("Enter the elements in array :");
    for (i = 0;i<n;i++){
        scanf("%d",&b[i]);
    }
    result = sum(b,n);
    printf("Sum of the array elements is %d\n",result);
}

int sum(int x[100], int y){
    int i,sum = 0;
    for (i = 0;i<y;i++){
        sum += x[i];
    }
    return sum;
}