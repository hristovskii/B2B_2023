/*
 Од стандарден влез се вчитува матрица сo m редици и n колони.
 Прво се вчитуваат броевите m и n а потоа и елементите на матрицата.

Да се изврши min-max нормализација на секоја колона од матрицата,
 односно секој елемент во секоја колона да се замени со вредноста x−minmax−min
 каде што x е елемент во некоја колона,
 а max и min се соодветно најголемиот и најмалиот елемент во соодветната колона.

Трансформираната матрица да се испечати на екран.

Објаснување на примерот:

Елементите на 0-тата колона се: 1,6,11,16,21. Минимален елемент е 1, а максимален елемент е 21

Секој од 5те елементи ќе се трансформира на следниот начин:

(1-1)/(21-1) = 0/20 = 0.00
(6-1)/(21-1) = 5/20 = 0.25
(11-1)/(21-1) = 10/20 = 0.50
(16-1)/(21-1) = 15/20 = 0.75
(21-1)/(21-1) = 20/20 = 1.00
For example:

Input
5 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

Result
0.00 0.00 0.00 0.00 0.00
0.25 0.25 0.25 0.25 0.25
0.50 0.50 0.50 0.50 0.50
0.75 0.75 0.75 0.75 0.75
1.00 1.00 1.00 1.00 1.00

 */

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);

    double matrix[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    for (int j = 0; j < n; j++) {
        double min, max;
        min = max = matrix[0][j];
        for (int i = 0; i < m; i++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }

        for (int i = 0; i < m; i++) {
            matrix[i][j] = (matrix[i][j] - min) / (max - min);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}