/*
 Од стандарден влез се чита број n, а потоа се читаат и n броеви.
 Потребно е на екран да се испечатат сите броеви кои што се строго растечки односо
 секоја цифра е поголема од претходната (1589 е растечки, 1529 не е растечки).
 Проверката за тоа дали бројот е растечки да се реализира со посебна функција која
 ќе врати 1 ако е растечки и -1 ако не е растечки. Дополнително ако бројот е растечки
 за него треба да се повика функција која ќе ја пресмета сумата на цифрите од кои е составен.

Дополнително: функцијата за пресметување на сума на цифри да биде рекурзивна

Печатењето треба да е во следен формат: 1234 (suma:  10)

For example:

Input
5
257 391 423 789 269

 Result
257 (suma: 14)
789 (suma: 24)
269 (suma: 17)

 */

#include <stdio.h>

int checkFunction(int number) {
    int curr = 0, prev = 0, res = 1;
    while (number > 0) {
        if (curr == 0 && prev == 0) {
            curr = number % 10;
        } else {
            prev = curr;
            curr = number % 10;
            if (prev < curr) {
                res = -1;
                break;
            }
        }
        number /= 10;
    }
    return res;
}

int sum(int number) {
    if (number == 0)
        return 0;
    return number % 10 + sum(number / 10);
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (checkFunction(arr[i]) == 1) {
            printf("%d (suma: %d)\n", arr[i], sum(arr[i]));
        }
    }
    return 0;
}
