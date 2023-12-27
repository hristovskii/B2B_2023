/*
Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.

На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).

Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:

ab12 1 1.25
Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци),
 вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето.
 Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

For example:

Input	      Result
100           c234 2 2.00
ab12 1 1.2    240.00
c234 2 2.0
#
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}


int main() {
    wf();
    int uplata, tip;
    int max_tip;
    char max_sifra[10];
    char sifra[10];

    float koef, max_koef, dobivka = 1;

    FILE *f = fopen("livce.txt", "r");

    if (!f) {
        printf("Can not open file livce.txt");
        exit(-1);
    }

    fscanf(f, "%d", &uplata);

    if (fscanf(f, "%s %d %f", max_sifra, &max_tip, &max_koef) && !feof(f)) {

        dobivka = uplata * max_koef;

        while (fscanf(f, "%s %d %f", sifra, &tip, &koef) && !feof(f)) {
            dobivka *= koef;

            if (koef > max_koef) {
                strcpy(max_sifra, sifra);
                max_tip = tip;
                max_koef = koef;
            }

        }

        printf("%s %d %.2f\n%.2f", max_sifra, max_tip, max_koef, dobivka);
    }

    fclose(f);
    return 0;

}
