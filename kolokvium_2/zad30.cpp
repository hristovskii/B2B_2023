/*
Во рамките на текстуална датотека matrica.txt се сместени елементите (целобројни вредности)
 од една матрица (A). Во првиот ред од датотеката се запишани бројот на редици n и бројот
 на колони m на матрицата (n, m < 120). Потоа, во секој ред од датотеката се запишани
 елементите од соодветната редица на матрицата.

Да се испечати колку индексни броеви има во секоја колона поединечно.

Индексен број е број чија вредност е идентична со вредноста што се добива
 со спојување на индексот од редицата и колоната на елементот.

Помош:

Индексен елемент: вредноста на елементот Aij е иста со ij како број

- ако i=10, j=31, елементот Aij треба да има вредност 1031 за да биде индексен број

Пример:

Влез: // датотека matrica.txt

4  5

0    1    2    3    4

5    6    7    8    9

10  21  22  23  11

0    1    2    33    4

Излез:

1

2

2

3

1


Објаснување:

Во матрицата A индексни елементи се:

1ва колона: 0

2ра колона: 1, 21

3та колона: 2, 22

4та колона: 3, 23, 33

5та колона: 4

For example:

Input
4 5
0 1 2 3 4
5 6 7 8 9
10 21 22 23 11
0 1 2 33 4
#

 Result
1
2
2
3
1
_________________________
 Input
3 3
0 1 2
10 11 12
20 21 22
#

Result
3
3
3

 */

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <math.h>

void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int kolku_cifren(int broj) {
    int n = 0;
    if (broj == 0) return 1;
    while (broj) {
        broj /= 10;
        n++;
    }
    return n;
}

int main() {
    wtf();

    FILE *dat = fopen("matrica.txt", "r");
    int mat[120][120];
    int n, m, broj;
    fscanf(dat, "%d %d", &n, &m);
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            fscanf(dat, "%d", &mat[i][j]);
        }
    }
    for (j = 0; j < m; j++) {
        int br_indeksni = 0;
        int cifren = kolku_cifren(j);
        for (i = 0; i < n; i++) {
            broj = i * (int) (pow(10, cifren)) + j;
            /*   if(j < 10)
                   broj = i*10 + j;
               else if (j < 100)
                   broj = i*100 + j;
               else broj = i*1000 + j; */
            if (broj == mat[i][j])
                br_indeksni++;
        }
        printf("%d\n", br_indeksni);
    }
    fclose(dat);
    return 0;
}
