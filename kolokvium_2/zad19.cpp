/*
 За квадратна матрица А со димензии n x n,
 од стандарден влез се внесува бројот n (n > 2) и елементите на матрицата (реални броеви).
 Нека X e збирот од елементите под главната дијагонала во матрицата А.
 Нека Y е збирот од елементите под споредната дијагонала во матрицата А.
 Да се креира нова матрица B на следниот начин:

сите елементи од главната дијагонала во матрицата B треба да имаат вредност X

сите елементи од споредната дијагонала во матрицата B треба да имаат вредност Y

ако даден елемент припаѓа и на главната и на споредната дијагонала во матрицата B, тогаш неговата вредност e X+Y

сите останати елементи во матрицата B имаат вредност 0

Новата матрица B да се испечати на стандарден излез.

ПРИМЕР:

Матрица A

5       5.5     6       1.2     2.5
8       95.1    21.3    13      0.2
34      4.1     37.4    22      6
4.1     5.5     0.7     7       0
42      1.1     3.2     7.5     1.8


Матрица B

110.2       0       0       0       49.5
0           110.2   0       49.5    0
0           0       159.7   0       0
0           49.5    0       110.2   0
49.5        0       0       0       110.2

For example:

Input
3
101 202 303
11 22 33
1 2 3

Result
14.0 0.0 38.0
0.0 52.0 0.0
38.0 0.0 14.0

 */

#include<stdio.h>

int main() {

    int i, j, n;
    float broj, a[100][100], x = 0.0, y = 0.0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%f", &broj);
            if (i > j)
                x += broj;
            if (i + j >= n)
                y += broj;
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j)
                a[i][j] = x;
            else if (i + j == n - 1)
                a[i][j] = y;
            else
                a[i][j] = 0;
        }

    }

    if (n % 2)
        a[n / 2][n / 2] = x + y;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.1f ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}