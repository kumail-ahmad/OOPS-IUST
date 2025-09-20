#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Lowercase vowel\n");
            break;
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Uppercase vowel\n");
            break;
        default:
            if (isalpha(ch))
                printf("Consonant\n");
            else if (isdigit(ch))
                printf("Digit\n");
            else
                printf("Special character\n");
    }
    return 0;
}
