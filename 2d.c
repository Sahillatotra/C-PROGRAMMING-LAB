#include<stdio.h>
void main()
{
    int a[3][3]={{1,2},{3,4},{5,6}};
    int i,j;
    printf("enter the array elements:[%d][%d]",i,j);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("to print the array inverse matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[j][i]);
        }
    }
    printf("\n");
}
