#include<stdio.h>
void main()
{
    int arr[30],i,num,temp,j;
    printf("enter the size of an array");
    scanf("%d",&num);
    printf("enter the values of an array");
    for(i=0;i<num;i++)
    scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=1;j<i-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=temp;
                arr[j+1]=arr[j];
                temp=arr[j+1];
            }
        }
    }
