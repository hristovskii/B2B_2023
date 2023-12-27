/*
Од тастатура се чита димензија на квадратна матрица(максимална големина 100х100).
 Треба да се провери дали матрицата го задоволува следниот услов: секој елемент од
 главната дијагонала да биде еднаков со збирот на елементите десно (во истата редица) од тој елемент.
 Ако матрицата го исполнува условот истата треба да се испечати на екран, а во спротивно се  печати -1.

For example:

Input
4
7 1 2 4
9 3 1 2
5 10 4 4
16 10 7 8

 Result
7 1 2 4
9 3 1 2
5 10 4 4
16 10 7 8

 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int m[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    }
    int sum = 0, flag = 0, print = 1, el = 0;
    for (int i = 0; i < n; i++) {
        sum = 0;
        flag = 0;
        el = 0;
        if (i == n - 1) break;
        for (int j = 0; j < n; j++) {
            if (flag == 1)
                sum += m[i][j];
            if (i == j) {
                flag = 1;
                el = m[i][j];
            }
        }
        if (sum != el) {
            print = 0;
            break;
        }
    }
    if (print == 0)
        printf("-1");
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
