/*
 Напишете целосно рекурзивна функција triagolnik(n) што за даден влезен аргумент
 n ќе испечати на екран превртен триаголник од броевите од 1 до n, како во примерот подолу.
 Дополнителни функции се дозволени, но истите мора да се рекурзивни. Не е дозволено користење на циклуси!

Пример за n=4:

1 2 3 4
1 2 3
1 2
1
For example:

Input	Result
3       1 2 3
        1 2
        1

 */

#include <stdio.h>

void printaj(int n, int tmp) {

    if (n <= 0) {
        return;
    } else if (n == 1) {
        printf("1 ");
    } else if (tmp <= n) {
        printf("%d ", tmp);
        tmp++;
        printaj(n, tmp++);
    }
}

void triagolnik(int n) {
    int tmp = 1;
    printaj(n, tmp);
    printf("\n");
    if (n > 1)
        triagolnik(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    triagolnik(n);

    return 0;
}