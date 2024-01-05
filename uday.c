#include<stdio.h>
int main()
{
    char ch;
    printf("enter a chracter:");
    scanf("%c", &ch);
     (ch%2==0) ? printf("chracter is even") : printf("chracter is odd");
    return 0;
}