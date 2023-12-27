/*
 Од стандарден влез се читаат броевите N и k, потоа се внесуваат N елементи во низа.
 Ваша задача е да ја испечатите низата и да испечатите колку пати во низата се појавува k.

Напомена: Печатењето на елементите во низата да биде во функција.

For example:

Input
5 678
12
678
11
53
325

 Result
12 678 11 53 325
Brojot 678 vo nizata se naogja 1 pati.

 */

#include <stdio.h>

#define MAX 100

void funk(int n, int k, int niza[]) {
    int i, brojac = 0;
    for (i = 0; i < n; i++) {
        printf("%d ", niza[i]);
        if (k == niza[i]) {
            brojac++;
        }
    }

    printf("\nBrojot %d vo nizata se naogja %d pati.", k, brojac);
}

int main() {

    int i, n, k, niza[MAX];

    scanf("%d", &n);
    scanf("%d", &k);
    for (i = 0; i < n; i++) {
        scanf("%d", &niza[i]);
    }

    funk(n, k, niza);

    return 0;
}