#include<stdio.h>
int main()
{
    int a,b,f=0,s=1,next;
    printf("enter the no. of terms you want:");
    scanf("%d",&b);
    printf("fib series:%d  %d",f,s);
    for(a=1;a<=b;++a)
    {
        next=f+s;
        printf("%d ",next);
        f=s;
        s=next;
    }
return 0;
}