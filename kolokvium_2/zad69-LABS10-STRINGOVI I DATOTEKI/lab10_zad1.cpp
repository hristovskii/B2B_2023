/*
 Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери.
 Да се трансформира низата така што левата и десната половина од стрингот ќе си ги сменат местата.

Напомена: Сите тест примери ќе имаат парен број на знаци.

For example:

Input
Stefan

 Result
fanSte
 ________________________
 Input
Strukturno

 Result
turnoStruk

 */

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char a[MAX], b[MAX];
    scanf("%s", a);
    strcpy(b, a + (strlen(a) / 2));
    strncat(b, a, (strlen(a) / 2));
    printf("%s", b);
    return 0;
}