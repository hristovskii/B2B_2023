/*
 Да се напише функција void sort (int x, int y, int z) која што ќе ги сортира
 во опаѓачки редослед трите броја, односно во x ќе биде сместен најголемиот број, а во z најмалиот.

Да не се менува main функцијата.

For example:

Input	Result
1 2 3   3 2 1

 */

#include <stdio.h>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void sort(int *x, int *y, int *z) {
    if (*x < *y) {
        swap(x, y);
    }
    if (*x < *z) {
        swap(x, z);
    }
    if (*y < *z) {
        swap(y, z);
    }
}


int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    sort(&a, &b, &c);

    printf("%d %d %d", a, b, c);

    return 0;
}

