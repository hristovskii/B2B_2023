/*
 Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви од интервалот [A,B]
 кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4.

Предлог за работа:
Да се имплементира функција reverseNumber (int number) која ќе го
 пресмета обратниот број на определен број number.
Да се имплементира функција isPalindrome (int number) која ќе врати 1 доколку
 бројот number е палиндром, а 0 во спротивно
Да се имплементира функција containsDigits (int number) која ќе врати 1 доколку
 сите цифри во бројот се 0,1,2,3 или 4, а 0 во спротивно.
Да се искористат функциите isPalindrome и containsDigits во main функцијата
Дополнително: Направете ја функцијата containsDigits рекурзивна.
For example:

Input	    Result
10 100      11
            22
            33
            44

 */

#include <stdio.h>

int reverseNumber(int number) {
    int rev = 0;
    while (number) {
        rev = 10 * rev + number % 10;
        number /= 10;
    }
    return rev;
}

int isPalindrome(int number) {
    return number == reverseNumber(number);
}

int containsDigits(int number) {
    if (number == 0) {
        return 1;
    } else {
        if (number % 10 > 4) {
            return 0;
        } else {
            return containsDigits(number / 10);
        }
    }
}

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
//        printf("%d %d\n", i, reverseNumber(i));
        if (isPalindrome(i) && containsDigits(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
