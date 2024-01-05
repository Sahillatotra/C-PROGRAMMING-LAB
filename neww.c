#include <stdio.h>
#include <stdbool.h>
bool isVowel(char c) {
    c = toupper(c); 
    if (c =='A'||c =='E'||c=='I'||c == 'O'||c=='U') {
        return true;
    }
    return false;
}
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (isVowel(c)) {
        printf("%c is a vowel.\n", c);
    } else if (isalpha(c)) {
        printf("%c is a consonant.\n", c);
    } else {
        printf("%c is not a letter.\n", c);
    }
    return 0;
}