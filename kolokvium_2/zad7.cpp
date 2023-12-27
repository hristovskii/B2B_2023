/*
 Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
 На почетокот се внесуваат димензиите на матрицата, а потоа и елементите
 на матрицата кои се само вредностите 1 и 0.
 Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има
 барем 3 последователни елементи со вредност 1.

Пример:

 1  1   1   0
 1  0   1   1
 1  0   0   1

1 ред + 1 колона = 2

For example:

Input	              Result
3 8                   5
0 0 1 1 1 0 0 0
1 1 1 0 1 1 1 0
0 1 1 1 1 0 0 1
 */

#include <stdio.h>

int main() {
    int a[100][100];
    int rows, cols;
    int i, j;
    scanf("%d %d", &rows, &cols);
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    int flag;
    int c;
    for (i = 0; i < rows; ++i) {
        c = 0;
        flag = 0;
        for (j = 0; j < cols; ++j) {
            if (a[i][j] == 1) {
                ++c;
            } else {
                if (c >= 3) {
                    flag = 1;
                    ++count;
                    break;
                }
                c = 0;
            }
        }
        if (!flag && c >= 3) {
            ++count;
        }
    }
    for (i = 0; i < cols; ++i) {
        c = 0;
        flag = 0;
        for (j = 0; j < rows; ++j) {
            if (a[j][i] == 1) {
                ++c;
            } else {
                if (c >= 3) {
                    flag = 1;
                    ++count;
                    break;
                }
                c = 0;
            }
        }
        if (!flag && c >= 3) {
            ++count;
        }
    }
    printf("%d\n", count);
    return 0;
}
