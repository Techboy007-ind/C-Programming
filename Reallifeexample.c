#include <stdio.h>
int main(void)
{
   int items = 50;
   float price = 9.99;
   float total = items*price;
   char currency[] = "Rs";

   printf("The total number items : %d\n",items); 
   printf("The price of each item : %s%.2f\n",currency,price);
   printf("The total amount : %s%.2f\n",currency,total);
}