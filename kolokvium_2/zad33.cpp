/*
 Да се напише програма со која ќе се печатат најмалите k елементи од низата.
 Низата и бројот на најмалите елементи се внесуваат преку тастатура.

For example:

Input	                  Result
7 4                       4-te najmali elementi se: 5 12 16 20
16 12 5 49 48 47 20

Input	                  Result
10 5                      5-te najmali elementi se: 1 1 1 1 2
1 89 70 1 1 2 1 3 99 40

 */

#include<stdio.h>

int main() {
    int a[100], b[100], pom;
    int i, j, k, n;

    scanf("%d", &n);
    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (b[j] > b[j + 1]) {
                pom = b[j];
                b[j] = b[j + 1];
                b[j + 1] = pom;
            }
        }
    }

    printf("%d-te najmali elementi se: ", k);
    for (i = 0; i < k; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
