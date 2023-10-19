#include<stdio.h>
void main()
{
    char v;
    printf("enter a character:");
    scanf("%c",&v);
    if (v=='a'||v=='e'||v=='i'||v=='o'||v=='u'||v=='A'||v=='E'||v=='I'||v=='O'||v=='U')
    {
        printf("number is vowel");
    }
    else
    {
        printf("number is consonant");
    }
}