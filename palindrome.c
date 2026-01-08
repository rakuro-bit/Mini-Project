#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    
    // Input the word
    scanf("%s", word);

    int len = strlen(word);
    int i, isPalindrome = 1;

    // Check palindrome
    for (i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Perfect Secret Word\n");
    else
        printf("Not a Secret Word\n");

    return 0;
}
