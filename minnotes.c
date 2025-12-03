#include <stdio.h>

int main() {
    int denom[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[10] = {0};
    int n = 10;   
    
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);

    int remaining = amount;

    for (int i = 0; i < n; i++) {
        if (remaining >= denom[i]) {
            count[i] = remaining / denom[i];   
            remaining = remaining % denom[i];  
        }
    }

    printf("\nMinimum coins/notes needed: \n");

    int total = 0;
    for (int i = 0; i < n; i++) {
        if (count[i] > 0) {
            printf("%d x %d = %d\n", denom[i], count[i], denom[i] * count[i]);
            total += count[i];
        }
    }

    printf("\nTotal coins/notes used: %d\n", total);
    return 0;
}
