/*
Од тастатура се чита број n а потоа и низа од n елементи.
Потребно е низата да се трансформира така што максималниот и
минималниот елемент ќе си ги заменат местата, а на останатите елементи ќе им се
додаде разликата меѓу максималниот и минималниот елемент.
Самата трансформација треба да се изврши во функцијата
void transform(int *arr, int n)

For example:

Input	   Result
4          4 5 6 1
1 2 3 4

 */
#include <stdio.h>

void transform(int *arr, int n) {
    int max = 0, maxI = -1, min = 999, minI = -1;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
            maxI = i;
        }
        if (*(arr + i) < min) {
            min = *(arr + i);
            minI = i;
        }
    }
    int diff = max - min;
    int temp = *(arr + maxI);
    *(arr + maxI) = *(arr + minI);
    *(arr + minI) = temp;
    for (int i = 0; i < n; i++) {
        if (i != maxI && i != minI) {
            *(arr + i) += diff;
        }
    }
}

int main() {
    int n, niza[100];
    scanf("%d", &n);
    int *arr = niza;
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }
    transform(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    return 0;
}
