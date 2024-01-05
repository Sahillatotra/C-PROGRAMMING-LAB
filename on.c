#include<stdio.h>
void display(int);
void main()
{
    int limit;
    printf("\n enter the limit to print the natural:");
    scanf("%d",&limit);
    display(limit);
}
void display(int x)
{
    if(x<0)
    return;
    else
    printf("%d\n",x);
    display(x-1);
    return;
    printf("\n%d\n",x);
}    