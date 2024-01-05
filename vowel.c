#include<stdio.h>
void main()
{
    char c;
    printf("enter the character:");
    scanf("%c",&c);
    if(c =='A'||c =='E'||c=='I'||c == 'O'||c=='U')
   {
        printf("%c is a vowel.\n", c);
    } else
    {
        printf("%c is a consonant.\n", c);
    }
 }
