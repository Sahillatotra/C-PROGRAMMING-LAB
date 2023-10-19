#include<stdio.h>
int main()
{
    int a,b,c,big,vg;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    big=a>b>c?a:b;
    vg=big>c?big:c;
    printf("the greatest no id=%d",vg);
}