#include <stdio.h>

void print_array(int array[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    print_array(array, 4);

    return 0;
}