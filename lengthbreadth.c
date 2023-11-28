#include <stdio.h>
void main()
{
    int x,r,a,l,b,area,peri;
    printf("Whose area you want\n 1 For area of circle and perimeter of circle \n 2 For area of square and perimeter of square \n 3 For area of rectangle and perimeter of rectangle\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Radius of Circle:");
        scanf("%d",&r);
        area=3.14*r*r;
        peri=2*3.14*r;
        printf("Area of Circle:%d\n Perimeter of Circle:%d",area,peri);
        break;
        case 2:
        printf("Side of Square:");
        scanf("%d",&a);
        area=a*a;
        peri=4*a;
        printf("Area of Square:%d\n perimeter of square:%d",area,peri);
        break;
        case 3:
        printf("Lenght and Breadth of the Rectangle:");
        scanf("%d%d",&l,&b);       
        area=l*b;
        peri=2*(l+b);
        printf("Area of Rectangle:%d",area);
        break;
        default:
        printf("Enter correct value");
    }
}    