#include<stdio.h>
void main()
{
    int limit,num,count,big;
    
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter %d no\n",limit);
    for(count=1;count<=limit;count++)
        {
            scanf("%d",&num);
            if(num>big||count==1){
                big=num;
            }
        }
printf( "biggest no. is %d\n",big);
}
