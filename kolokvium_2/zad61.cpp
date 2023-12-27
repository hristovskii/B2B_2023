/*
 Од стандарден влез се чита број N, а потоа низа на N цели броеви.
 Да се дефинира функција int isInteresting(int number) која што ќе врати 1
 доколку е интересен број, односно доколку цифрите на бројот се парна-непарна цифра, наизменично.
 Во спротивно враќа 0. Да се дефинира функција void printArray(int numbers[], int n) која што
 ќе ги испринта сите броеви во низата кои што се интересни.

Пример интересни броеви: 1634, 678, 141858

За се освојат сите поени од вежбата, потребно е функцијата printArray да биде рекурзивна.


For example:

Input
5
123
6789
111
5325
325

Result
325
6789
123

 */


#include <stdio.h>

int isInteresting(int number) {
    int flagParna;
    if (number % 10 % 2 == 0)
        flagParna = 1;
    else flagParna = 0;
    number /= 10;
    while (number > 0) {
        if (flagParna) {
            if (number % 10 % 2 == 0) {
                return 0;
            }
            flagParna = 0;
        } else {
            if (number % 10 % 2 != 0) {
                return 0;
            }
            flagParna = 1;
        }
        number /= 10;
    }
    return 1;
}

void printArray(int numbers[], int n) {
    if (n == 0)
        return;

    if (isInteresting(numbers[n - 1]))
        printf("%d\n", numbers[n - 1]);

    printArray(numbers, n - 1);
}


int main() {
    int n, i, a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printArray(a, n);

    return 0;
}
