#include<stdio.h>
void main()
{
    int rollno[]={1,2,3,4,5,6},n,i,j;
    printf("ENTER THE SIZE OF AN ARRAY\n");
    scanf("%d",&n);
    printf("enter the value\n");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&rollno[i]);
    }
for(j=0;j<=n;j+=2){
    printf("the even values are %d\n",rollno[j]);
}
}