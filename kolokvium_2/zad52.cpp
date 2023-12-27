/*
 На стандарден влез се читаат два броја a и b.
 Ваша задача е да ја најдете најголемата непарна цифра на секој број во опсег [a,b].
 Функцијата за наоѓање на најголема непарна цифра мора да е рекурзивна.

Напомена: ако бројот нема непарни цифри се печати 0.

Печатење на секој број и негова цифра е во формат: број -> цифра

For example:

Input
0 20

 Result
0 -> 0
1 -> 1
2 -> 0
3 -> 3
4 -> 0
5 -> 5
6 -> 0
7 -> 7
8 -> 0
9 -> 9
10 -> 1
11 -> 1
12 -> 1
13 -> 3
14 -> 1
15 -> 5
16 -> 1
17 -> 7
18 -> 1
19 -> 9
20 -> 0
 */

#include<stdio.h>

int najgolemaNeparnaCifra(int n) {
    if (n < 10) {
        if (n % 2 == 0)
            return 0;
        else
            return n;
    } else {
        int cif = n % 10;
        if (cif % 2 == 0)
            return najgolemaNeparnaCifra(n / 10);
        else {
            if (cif < najgolemaNeparnaCifra(n / 10))
                return najgolemaNeparnaCifra(n / 10);
            else return cif;
        }
    }
}

int main() {
    int a, b, i;

    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
        printf("%d -> %d\n", i, najgolemaNeparnaCifra(i));
}
