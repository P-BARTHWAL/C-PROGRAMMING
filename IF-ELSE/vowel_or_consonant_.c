#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet first
    if ((ch>= 'A' && ch<='Z') || (ch>='a' && ch<= 'z'))
        { if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } 
    else {
        printf("Error! Non-alphabetic character entered.\n");
    }

    return 0;
}
