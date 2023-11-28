#include <stdio.h>

int main() {
    int a,b;
    printf("enter the number:\n,enter the limit:");
     scanf("%d%d",&a,&b);
    printf("Multiplication Table of %d\n",a);
    printf("-----------------------------\n");

    for (int i = 1; i <= b; i++) {
        printf("%d x %d = %d\n", i, a, i * a);
    }

    return 0;
}
    
