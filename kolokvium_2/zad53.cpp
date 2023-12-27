/*
Oд стандарден влез се читаат броеви се додека не се прочита нешто што не е број.
 За сите броеви кои што се палиндроми на екран да се испечати сума на цифри од кои што е составен бројот,
 за броевите кои што не се палиндроми потребно е на екран да се испечати од колку цифри е составен бројот.
 Проверка дали бројот е палиндром, колкава е сумата на цифри или од колку цифри е составен бројот
 да се реализираат со посебни функции.

Дополнително функцијата за броење на цифри на број направете ја рекурзивна.

For example:

Input
1221
123
717
8258
28
.

Result
6
3
15
4
2
 */
#include <stdio.h>

int isPalindrome(int n) {
    int reversed = 0, original;
    original = n;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (original == reversed)
        return 1;
    else
        return 0;
}

int suma(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int countDigits(int n) {
    if (n == 0)
        return 0;
    else
        return 1 + countDigits(n / 10);
}

int main() {
    int n;
    while (scanf("%d", &n)) {
        if (isPalindrome(n)) {
            printf("%d\n", suma(n));
        } else {
            printf("%d\n", countDigits(n));
        }
    }
    return 0;
}
