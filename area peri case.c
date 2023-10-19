#include <stdio.h>
void main()
{
    int x,r,a,l,b,area,peri;
    printf("1. Circle \n 2. Square \n 3. Rectangle\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Radius of Circle:");
        scanf("%d",&r);
        area=3.14*r*r;
        peri=2*3.14*r;
        printf("Area of Circle:%d\nPerimeter of Circle:%d",area,peri);
        break;
        case 2:
        printf("Side of Square:");
        scanf("%d",&a);
        area=a*a;
        peri=4*a;
        printf("Area of Square:%d\nPerimeter of Square:%d",area,peri);
        break;
        case 3:
        printf("Length and Breadth of the Rectangle:");
        scanf("%d%d",&l,&b);
        area=l*b;
        peri=2*(l+b);
        printf("Area of Rectangle:%d\nPerimeter of Rectangle:%d",area,peri);
        break;
        default:
        printf("Enter correct value");
    }
}