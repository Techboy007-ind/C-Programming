#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    char word[100];  
    scanf("%s", word);

    int start = 0;
    int end = strlen(word) - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (word[start] != word[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome == true) {
        printf("The word/number is a palindrome: %s\n", word);
    } else {
        printf("The word/number is not a palindrome: %s\n", word);
    }

    return 0;
}
