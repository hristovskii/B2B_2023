/*
 Од стандарден влез се читаат броевите N и k, потоа се внесуваат N елементи во низа.
 Ваша задача е да ја испечатите низата и да испечатите колку пати во низата се појавува k.

Напомена: Печатењето на елементите во низата да биде во функција.

For example:

Input	Result
5 678   12 678 11 53 325
12      Brojot 678 vo nizata se naogja 1 pati.
678
11
53
325

 */

#include<stdio.h>

#define MAX 100

void printArrayElements(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int findKeyInArray(int array[MAX], int i, int n, int key) {
    if (i == n) {
        return 0;
    } else {
        if (array[i] == key) {
            return 1 + findKeyInArray(array, i + 1, n, key);
        } else return findKeyInArray(array, i + 1, n, key);
    }
}

int main() {

    int array[MAX];
    int n, key;
    scanf("%d %d", &n, &key);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    int counter = findKeyInArray(array, 0, n, key);
    printArrayElements(array, n);
    printf("Brojot %d vo nizata se naogja %d pati.", key, counter);

    return 0;
}
