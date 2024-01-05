#include <stdio.h>

void multiplyMatrix(int m1, int n1, int m2, int n2, int matrix1[m1][n1], int matrix2[m2][n2], int result[m1][n2]) {
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int m, int n, int matrix[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int result[3][3];

    multiplyMatrix(3, 3, 3, 3, mat1, mat2, result);

    printf("Matrix 1:\n");
    printMatrix(3, 3, mat1);

    printf("Matrix 2:\n");
    printMatrix(3, 3, mat2);

    printf("Result Matrix:\n");
    printMatrix(3, 3, result);

    return 0;
}
