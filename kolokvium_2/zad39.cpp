/*
 Да се напише програма која за низа од N броеви ќе проверува дали
 парот кој се наоѓа еден до друг е прост број.

НАПОМЕНА: низата е составена од цифри од 0 до 9

For example:

Input
11
1 7 4 0 2 1 8 1 1 3 7

Result
brojot 17 e prost
brojot 40 NE e prost
brojot 21 NE e prost
brojot 81 NE e prost
brojot 13 e prost
brojot 7 e prost

 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int e_prost(int el);

int main() {
    int i, n, nov, A[MAX];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n - 1; i += 2) {
        nov = A[i] * 10 + A[i + 1];

        if (e_prost(nov))
            printf("brojot %d e prost\n", nov);
        else
            printf("brojot %d NE e prost\n", nov);
    }
    if ((n % 2) && (e_prost(A[n - 1]))) //ако има непарен број на елементи во низата
        printf("brojot %d e prost\n", A[n - 1]);
    else if (n % 2)
        printf("brojot %d NE e prost\n", A[n - 1]);

    return 0;
}

int e_prost(int el) {
    int i;
    if ((el == 1) || (el == 1)) return 0;
    if (el == 3) return 1;
    for (i = 2; i * i <= el; i++) {
        if (el % i == 0)return 0;
    }
    return 1;
}
