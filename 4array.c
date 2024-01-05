#include<stdio.h>
void main()
{
    int i=0;
    int no[8]={20,40,50,60,70,80,10,100};
    no[0]=20;
    no[1]=40;
    no[2]=50;
    no[3]=60;
    no[4]=70;
    no[5]=80;
    no[6]=10;
    no[7]=100;
    for(i=0;i<5;i++)
    {
        printf("\n mark[%d] %d",i,no[i]);
    }

}