#include <stdio.h>
void main()
 {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Modular division remainder by 2:%d\n",num %2);
    printf("Modular division remainder by 3:%d\n",num %3);
    printf("Modular division remainder by 4:%d\n",num %4);
}