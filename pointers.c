#include <stdio.h>


// Pointer dec,initialise,access
/*int main(){
    int a;
    int *ptr;
    printf("Enter the number: ");
    scanf("%d",&a);
    ptr = &a;
    printf("value of 'a' using pointer is %d",*ptr);
    return 0;
}*/

//pointer to pointer
/*int main(){
    int **k;
    int *p;
    int val = 6;

    p = &val;
    k = &p;
    
    printf("value of val is %d\n",val);
    printf("value of val is %d\n",*p);
    printf("value of val is %d\n",**k);
    printf("address of val is %p\n",&val);
    printf("address of val is %p\n",p);
    printf("address of val is %p\n",*k);
    printf("value of p is %p\n", *(&p));
    printf("value of p is %p\n", *k);
    printf("address of p is %p\n", &p);
    printf("address of p is %p\n", k);
    printf("value of k is %p\n",&p);


}*/

//call by reference

//void swap(int*,int*);
/*int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping are %d and %d\n",a,b);
    swap(&a,&b);
    printf("Numbers after swapping are %d and %d",a,b);
    return 0;
    }

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}*/

//pointer arithmatic
    /*int main(){
    int a[] = {10,20,30,40,50};
    int *ptr = a;

    printf("*ptr = %d, ptr = %p\n",*ptr,ptr);
    ptr++;
    printf("*ptr = %d, ptr = %p\n",*ptr,ptr);
    ptr--;
    printf("*ptr = %d, ptr = %p\n",*ptr,ptr);
    ptr = ptr + 2;
    printf("*ptr = %d, ptr = %p\n",*ptr,ptr);
    ptr= ptr-3;;
    printf("*ptr = %d, ptr = %p\n",*ptr,ptr);
    return 0;
 }*/

// reverse an array using pointers
/*int main(){
    int a[]={10,20,30,40,50};
    int *ptr = &a[4];
    for(int i = 0; i<=4 ;i++){
        printf("%d\n",*(ptr - i));

    }
    return 0;
}*/

// Sum of elements in an array
/*int main(){
    int a[]={10,20,30,40,50};
    int *ptr = a;
    int sum = 0;
    for(int i = 0; i<=4 ;i++){
        sum = sum + *(ptr+i);

    }
    printf("sum = %d\n",sum);
    return 0;

}*/

// Palindrome check using pointers
/*int main(){
    int flag = 0;
    char word[] = "madam";
    char *p = word,*q = &word[4];
    for(; q>p; q--,p++){
        if(word[*p]==word[*q])
            flag = 0;
        else
            flag = 1;
    }
    if (flag == 0)
        printf("The given word is a palindrome");
    else
        printf("The given word is not a palindrome");

    return 0;
}*/

// Taking input of n cities using pointers
/*int main(){
    int n;
    char cities[10][30];
    char (*ptr)[30];
    printf("Enter the number of cities: ");
    scanf("%d",&n);
    printf("Enter the cities: ");
    for (int i=0; i<n ; i++){
        scanf("%s",cities[i]);
    }
    ptr = cities;
    printf("Cities names are: ");
    for (int i=0; i<n ; i++){
        printf("%s\t",*(ptr+i));
    }
    return 0;

}*/

