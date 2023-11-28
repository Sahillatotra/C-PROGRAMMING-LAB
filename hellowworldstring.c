#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[100];
    int i, length;

    // string concatenation
    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
    printf("Concatenated string: %s\n", str3);

    // string comparison
    i = strcmp(str1, str2);
    if (i == 0)
        printf("%s and %s are same.\n", str1, str2);
    else
        printf("%s and %s are not same.\n", str1, str2);

    // string length
    length = strlen(str1);
    printf("Length of string %s is %d.\n", str1, length);

    // substring
    char sub[10];
    strncpy(sub, str1 + 2, 3);
    sub[3] = '\0';
    printf("Substring of string %s from index 2 is %s.\n", str1, sub);

    return 0;
}