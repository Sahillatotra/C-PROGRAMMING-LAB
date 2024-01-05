#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the value");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        printf("%d ",i);
        if(i%n==0){
            printf("it is prime no" );
        }
        else{printf("it not is prime");}
    }
}