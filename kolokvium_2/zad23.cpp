/*
 Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци.
 Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.

Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи
 поднизата А1c  најмалку 2 пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab)
 според редоследот како што се прочитани од влезот. При печатење на зборовите,
 сите алфабетски знаци треба да се испечатат со мали букви.

Пример

Влез:

6

Ekjqh!!lkjsdh

 A1c01АA1c92

12A1cwwA1cxy

12A1cwwA1bxy

аA1cwA1cA1ccA1cxab

nemaA1c_povekjepati


Излез

а1c01аа1c92

12а1cwwа1cxy

аа1cwа1cа1ccа1cxab


For example:

Input

6
Ekjqh!!lkjsdh
A1c01АA1c92
12A1cwwA1cxy
12A1cwwA1bxy
аA1cwA1cA1ccA1cxab
nemaA1c_povekjepati

Result

a1c01Аa1c92
12a1cwwa1cxy
аa1cwa1ca1cca1cxab

Input

10
A1C0cWqx5A1CqNtZCuqDZ
TyoWHFvCVZDyqmEWqn
0Lb2J8MFyi1ESK4WrE
a1Cyp4jHVyn83uaajdYA1C
qnZOuyfvsHJp2Iv9QF
I4RWKn5IfK4ZNQeacq
A1CzJVA1CXQEnA1Cl72zAquyyE6
6ljR3ZkRow3MA6g1HI
9ExwrNA1CA1C8TS3e7JDNLtM
QtqgUOqSA2CDfqjRFFKXa1C

Result

a1c0cwqx5a1cqntzcuqdz
a1cyp4jhvyn83uaajdya1c
a1czjva1cxqena1cl72zaquyye6
9exwrna1ca1c8ts3e7jdnltm

 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], maxStr[100];
    int maxLen = 0;
    int i, n, j, z, najdenaNiza = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", str);
        int no_occ = 0;
        int j;
        for (j = 0; j < strlen(str) - 2; j++) {
            if (tolower(str[j]) == 'a' && str[j + 1] == '1' && tolower(str[j + 2]) == 'c') {
                no_occ++;
            }
        }
        if (no_occ >= 2) {
            for (j = 0; j < strlen(str); j++)
                printf("%c", tolower(str[j]));
            printf("\n");
        }
    }

}
