
#include <stdio.h>

void sum_of_two_matrix(int a[100][100], int b[100][100], int result[100][100], int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int row, col;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[100][100], b[100][100], result[100][100];

    printf("Enter elements of matrix a:\n");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix b:\n");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    sum_of_two_matrix(a, b, result, row, col);

    printf("Resulting Matrix:\n");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;}