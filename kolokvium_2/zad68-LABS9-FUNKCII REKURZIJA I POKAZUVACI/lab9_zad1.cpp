/*
 Да се напише функција void sort (int x, int y, int z)
 која што ќе ги сортира во опаѓачки редослед трите броја,
 односно во x ќе биде сместен најголемиот број, а во z најмалиот.

Да не се менува main функцијата.

For example:

Input	Result
1 2 3   3 2 1

 */

#include <stdio.h>

void sort(int *x, int *y, int *z) {
    int temp = 0;
    if (*z > *x) {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*z > *y) {
        temp = *y;
        *y = *z;
        *z = temp;
    }
    temp = 0;
    if (*y > *x) {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    sort(&a, &b, &c);

    printf("%d %d %d", a, b, c);

    return 0;
}
