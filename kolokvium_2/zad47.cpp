/*
 Напишете програма за читање елементи во матрица и проверете дали
 дадената матрица е симетрична матрица или не.
 Од стандаред влез се внесуваат димензиите на матрицата M и N
 соодветно и потоа се внесуваат елементите на матрицата.
 Ваша задача е доколку матрицата е симетрична да испечатете на екран 1,
 доколку не е симетрична да испечатете -1, потоа се печати самата матрица на екран.

For example:

Input
3 3
1 2 3
2 4 5
3 5 8

Result
1
1 2 3
2 4 5
3 5 8
 */
#include <stdio.h>

#define SIZE 100

int main() {
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int M, N;
    int row, col, isSymmetric;

    scanf("%d %d", &M, &N);

    for (row = 0; row < M; row++) {
        for (col = 0; col < N; col++) {
            scanf("%d", &A[row][col]);
        }
    }

    for (row = 0; row < M; row++) {
        for (col = 0; col < N; col++) {
            B[row][col] = A[col][row];
        }
    }


    isSymmetric = 1;
    for (row = 0; row < M && isSymmetric; row++) {
        for (col = 0; col < N; col++) {
            if (A[row][col] != B[row][col]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric == 1) {
        printf("1\n");
    } else {
        printf("-1\n");
    }
    for (row = 0; row < M; row++) {
        for (col = 0; col < N; col++) {
            printf("%d ", A[row][col]);
        }

        printf("\n");
    }
    return 0;
}