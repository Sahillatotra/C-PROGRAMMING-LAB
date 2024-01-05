#include<stdio.h>
void main()
{
int i,j,rows;
printf("enter the row");
scanf("%d",&rows);
for(i=1;i<=rows;++i)
{
    for(j=i;j<=i;++j)
    {
        printf("*");
    }
    printf("\n");
}
}