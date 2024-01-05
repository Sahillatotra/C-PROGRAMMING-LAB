#include<stdio.h>
void main()
{
    int i, arr[30]={2,4,1,7,5,9,3,6,9,10};
    int num,ele , found=0;
    printf("enter the no of elements");
scanf("%d",&num);
printf("enter the elements");
for(i=0;i<num;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter elements to search");
for(i=0;i<10;i++)
{
    if(arr[i]==ele)
    {
        printf("enter foundat in index%d element:%d\n",i,ele);
        found=1;
        break;
    }
}
if(!found){
    printf("elements not found in the array");
}
}