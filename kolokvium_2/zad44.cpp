/*
 Да се напише програма која чита две целобројни матрици со димензија mxn,
 а потоа печати колку колони од првата матрица се наоѓаат во втората матрица.

For example:

Input	 Result
4 4      1

1 2 4 6
2 3 4 5
5 1 3 1
1 3 4 4

2 2 2 4
3 2 3 5
5 2 1 3
1 1 3 4

 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int i, j, m, pret, brojac, n, k, A[MAX][MAX], B[MAX][MAX];

    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {

            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {

            scanf("%d", &B[i][j]);
        }
    }
    brojac = 0;
    for (j = 0; j < n; j++) { // за секоја колона
        for (k = 0; k < n; k++) {
            pret = 1;
            for (i = 0; i < m; i++) {
                if (A[i][j] != B[i][k]) {
                    pret = 0;
                    break;
                }
            }
            if (pret)brojac++;
        }
    }
    printf("%d", brojac);

    return 0;
}
