#include <stdio.h>
int factorial(int num) 
{
    if (num == 0) {
        return 1;
    } else {
        return num*factorial(num-1);
    }
}
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num < 0) 
    {
        printf("Invalid input\n");
    } else {
        printf("Factorial of %d: %d\n",num,factorial(num));
    }
    return 0;
}