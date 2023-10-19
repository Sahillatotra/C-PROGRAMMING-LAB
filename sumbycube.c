#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,sum;
    printf("enter the numbers:");
    scanf("%d",&b);
    for(a=1;a<=b;a++)
    {
        c=pow(a,3);
       printf("%d ",c);
        sum=sum+c;
    }
    printf("Sum;%d\n",sum);
    return 0;
}