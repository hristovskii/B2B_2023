/*
 Да се прочита број N од тастатура. Да се дефинира функција form(int n)
 што ќе испечати форма од ѕвезди како што е прикажано на сликата.

За да се освојат сите поени од вежбата, потребно е функцијата form да биде рекурзивна.

For example:

Input
5

Result
*****
****
***
**
*

 */

#include <stdio.h>

void print(int n) {
    if (n != 0) {
        printf("*");
        print(n - 1);
    } else {
        printf("\n");
    }

}

void form(int n) {
    if (n == 0) {
        return;
    } else {
        print(n);
        form(n - 1);
    }
}

int main() {

    int n;
    scanf("%d", &n);

    form(n);

    return 0;
}
