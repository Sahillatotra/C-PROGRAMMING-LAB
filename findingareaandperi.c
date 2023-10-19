#include<stdio.h>
void main()
{
    float r,a,l,b;
    printf("enter the number");
    scanf("%f",&r);
    printf("enter the side od squae");
    scanf("%f",&a);
    printf("enter the lenth and breadth of rectangle");
    scanf("%f%f",&l,&b);
    float area,peri,ar,pr,are,per;
    area=a*a;
    pr=4*a;
    ar=l*b;
    per=2*(1+b);
    are=3.14*r*r;
    peri=2*3.14*r;
    printf ("area ofncircle=%.2f",area);
    printf("perimeter of circle=%.2f\n",peri);
    printf("area od square=%f\n",area);
    printf("peri of square=%f\n",pr);
    printf("area of rect=%f\n",ar);
    printf("peri of rect=%f\n",per);
}