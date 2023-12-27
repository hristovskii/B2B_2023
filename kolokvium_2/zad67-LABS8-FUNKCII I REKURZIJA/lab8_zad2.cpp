/*
Од стандарден влез се чита број N, а потоа низа на N цели броеви.
 Да се дефинира функција int isInteresting(int number)
 која што ќе врати 1 доколку е интересен број, односно доколку цифрите на
 бројот се парна-непарна цифра, наизменично. Во спротивно враќа 0.
 Да се дефинира функција void printArray(int numbers[], int n)
 која што ќе ги испринта сите броеви во низата кои што се интересни.

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

#define MAX 100

int isInteresting(int number) {
    if (number > 9) {
        if ((((number % 10) % 2 == 0) && ((number / 10 % 10) % 2 != 0)) ||
            (((number % 10) % 2 != 0) && ((number / 10 % 10) % 2 == 0))) {
            return isInteresting(number /= 10);
        } else {
            return 0;
        }
    }
    return 1;

}

void printArray(int numbers[], int n) {
    if (n == 1) {
        if (isInteresting(numbers[n - 1]))
            printf("%d", numbers[n - 1]);
        return;
    } else {
        if (isInteresting(numbers[n - 1])) {
            printf("%d\n", numbers[n - 1]);
        }
        return printArray(numbers, n - 1);
    }
}

int main() {

    int i, N, niza[MAX];
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &niza[i]);
    }

    printArray(niza, N);
    return 0;
}