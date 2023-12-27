/*
 Од стандарден влез се внесуваат број на елементи на низа и самата низа.
 Ваша задача е да најдете најголем и најмал елемент на низата,
 како и да ја трансформирате низата така што секој елемент ќе се зголеми за разликата
 помеѓу најголемиот и најмалиот елемент и на крајот да ги испечатите најголемиот,
 најмалиот елемент и трансформираната низата.

For example:

Input
5
2 4 5 1 3

Result
MAX -> 5
MIN -> 1
6 8 9 5 7

 */

#include<stdio.h>

int max(int *niza, int n) {
    int i;
    int maxi = *niza;
    for (i = 1; i < n; i++) {
        if (maxi < *(niza + i))
            maxi = *(niza + i);
    }
    return maxi;
}

int min(int *niza, int n) {
    int i;
    int mini = *niza;
    for (i = 1; i < n; i++) {
        if (mini > *(niza + i))
            mini = *(niza + i);
    }
    return mini;
}

void transformArray(int *niza, int n) {
    int mini = min(niza, n), maxi = max(niza, n);
    for (int i = 0; i < n; i++) {
        *(niza + i) = *(niza + i) + maxi - mini;
    }
}

int main() {

    int niza[100];
    int i, n;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &niza[i]);

    }

    printf("MAX -> %d\n", max(niza, n));
    printf("MIN -> %d\n", min(niza, n));

    transformArray(niza, n);

    for (i = 0; i < n; i++) {
        printf("%d ", niza[i]);

    }
    return 0;
}
