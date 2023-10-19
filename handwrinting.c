#include<stdio.h>
void main()
{
    int h;
    printf("enter marks");
    scanf("%d",&h);
    char cg;
    printf ("enter handwriting is good or bad");
    scanf("%c%c",&cg,&cg);
    if(cg=='y'||cg=='Y')
    {
       h=h+14;
    }
    printf(" your marks is %d",h);
}