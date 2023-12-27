/*
Од стандарден влез се вчитува бројот N, бројот K и знакот C.
 Потоа се вчитуваат N текстуални низи (секоја во нов ред).
Да се испечати на екран најдолгата текстуала низа која го содржи
 знакот C точно K пати без разлика на големината на буквата.
Ако нема таква низа, да се испечати порака NONE.
For example:

Input	         Result
2 5 a            NONE
Strukturno
programiranje
_________________________
 Input	                        Result
5 2 a                           programiranje vo python
Strukturno
programiranje vo c
programiranje vo c++
programiranje vo python
programiranje
programiranje vo python

 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int fun(char *str, int K, char C) {
    int i, count = 0;
    for (i = 0; i < strlen(str); i++) {
        if (tolower(*(str + i)) == tolower(C)) {
            count++;
        }
    }
    if (count == K) {
        return 1;
    }
    return 0;
}

int main() {
    int i, N, K, counter = 0, f;
    char C, str[MAX], tmp[MAX];
    scanf("%d %d %c", &N, &K, &C);
    for (i = 0; i <= N; i++) {
        fgets(str, 100, stdin);
        if (fun(str, K, C)) {
            if (strlen(tmp) < strlen(str)) {
                strcpy(tmp, str);
                f = 1;
            }
        }
    }

    if (f) {
        printf("%s", tmp);
    } else printf("NONE");
    return 0;
}