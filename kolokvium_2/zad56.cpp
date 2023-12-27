/*
 Да се напише рекурзивна функција преку која бројот ќе се трансформира на тој начин што
 секоја непарна цифра ќе се намали за 1, а парните цифри ќе бидат заменети со нула.
 Функцијата треба да го врати трансформираниот број. Да се напише и главна програма
 која ќе ја тестира работата на функцијата.

For example:

Input	Result
93854   Brojot e 82040

 */

#include <stdio.h>

int transform(int broj) {
    if (broj == 0)return 0;
    int cifra = broj % 10;
    if (cifra % 2 == 0) {
        cifra = 0;
    } else {
        cifra--;
    }

    return transform(broj / 10) * 10 + cifra;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Brojot e %d\n", transform(n));
    return 0;
}