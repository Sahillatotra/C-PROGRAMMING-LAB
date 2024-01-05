#include<stdio.h>
void main()
{
    int i,n;
    int no[100];
    printf("enter the size of array");
    scanf("%d",&n);



    for(i=0;i<=n;i++)
    {
        printf("enter %d value of array");
        scanf("%d",&no[i]);
    }
    for (i=0;i<n;i++){
        printf("\n%d %d %d %d ",no[i],*(i+no),*(no+i ),i[no]);}
}