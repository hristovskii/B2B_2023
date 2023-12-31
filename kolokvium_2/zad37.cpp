/*
 Од стандарден влез се читаат N броеви.
 N не е однапред познато, треба да читате броеви додека да се прочита бројот -1.
 Сместете ги прочитаните броеви во низа. Во секој тест пример ќе има помалку од 100 броеви пред бројот -1.

Потоа се внесуваат 3 торки од по 4 броеви L, R, V и I.
 L и R се броеви помеѓу 0 и N-1; во секој тест пример ќе важи L < R.
 Бројот I ќе има вредност само 0 или 1. Кога I е 0 ќе треба на броевите со индекси
 во интервалот [L,R] (вклучително на L и R) да додадете вредност V.
 Кога I е 1 ќе треба на броевите со индекси во интервалот (L,R) (не ги вклучува L и R)
 да додадете вредност V.

На крај отпечатете ја низата.

For example:

Input	                         Result
0 0 0 0 0 0 0 0 0 0 0 -1         5 5 5 0 3 3 0 9 9 9 0
0 2 5 0
4 5 3 0
6 10 9 1

 */

#include<stdio.h>

int main() {
    int array[100];
    int number, n = 0;

    scanf("%d", &number);
    while (number != -1) {
        array[n] = number;
        n++;
        scanf("%d", &number);
    }

    int l, r, value, inclusive, i;
    for (i = 0; i < 3; i++) {
        scanf("%d %d %d %d", &l, &r, &value, &inclusive);
        for (int j = l + inclusive; j <= r - inclusive; j++) {
            array[j] += value;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}