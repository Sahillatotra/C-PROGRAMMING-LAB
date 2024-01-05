#include<stdio.h>
int main()
{
    int choice;
    float Radius,length,breadth,side;
    float area,perimeter;
    printf("Select any one choise from the following");
    printf("\n1.Circle");
    printf("\n2.Square");
    printf("\n3.Rectangle");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("Enter the Raduis of the Circle:");
        scanf("%f",&Radius);
        area=3.14*Radius*Radius;
        perimeter=2*3.14*Radius;
        printf("Area is:%.2f",area);
        printf("\n perimeter is:%.2f",perimeter);
    }
     else if (choice==2)
    {
        printf("Enter the Side of Square:");
        scanf("%f",&side);
        area=side*side;
        perimeter=4*side;
       printf("Area is:%.2f",area);
        printf("\n perimeter is:%.2f",perimeter);
    }
    else if(choice==3)
    {
        printf("Enter the length and breadth of Rectangle: \n");
        scanf("%f",&length);
        scanf("%f",&breadth);
        area=length*breadth;
        perimeter=2*length+breadth;
        printf("Area is:%.2f",area);
        printf("\n perimeter is:%.2f",perimeter);
    
    }
    else
    {
        printf("Invalide number");
    }
return 0;
}    
