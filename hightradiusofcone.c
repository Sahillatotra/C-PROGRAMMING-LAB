#include<stdio.h>
#include<math.h>
void main()
{
    float r,h,tsa,voc;
    printf("enter the height and radius of cone");
    scanf("%f%f",&h,&r);
    tsa=3.14*r*(r+sqrt(h*h+r*r));
    voc=(0.33)*(3.14*r*r*h);
    printf("tsa=%f",tsa);
    printf("vsa=%f",voc); 
}