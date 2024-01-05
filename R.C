#include <stdio.h>
int main() {
    int num, mod, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Modular division remainder by 2, 3, and 4:\n");
    for (mod = 2; mod <= 4; mod++) {
        remainder = num % mod;
        printf("By %d: ", mod);
        switch (remainder) {
            case 0:
                printf("No remainder\n");
                break;
            case 1:
                printf("1\n");
                break;
            default:
                printf("%d\n", remainder);
                break;
        }
    }
    return 0;
}