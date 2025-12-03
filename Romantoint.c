#include <stdio.h>
#include <string.h>  // for strcmp

int convert(const char *roman);  // function prototype

int main() {
    char roman[50];
    scanf("%s", roman);   // read input string
    int ans = convert(roman);
    printf("%d\n", ans);
    return 0;
}

int convert(const char *roman) {
    if (strcmp(roman, "I") == 0) return 1;
    else if (strcmp(roman, "II") == 0) return 2;
    else if (strcmp(roman, "III") == 0) return 3;
    else if (strcmp(roman, "IV") == 0) return 4;
    else if (strcmp(roman, "V") == 0) return 5;
    else return -1;  // invalid input
}

