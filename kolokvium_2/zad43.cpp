/*
 Од стандарден влез се внесува големината на еден фудбалски терен MxN.
 Потоа се внесува локацијата на играчот на тој терен (x_igrac, y_igrac),
 па се внесува локацијата на топката (x_topka, y_topka) и локацијата на
 голот (x1_gol, y1_gol) (x2_gol, y2_gol). Од кога ќе се внесат овие вредности
 треба да се испечати фудбалскиот терен, во фудбалскиот терен играчот е означен со карактер 'i',
 голот е означен со карактер ']' и топката е означена со 'o', се останато се означува со '-'.
 Ваша задача е најпрво да го испечатите на екран фудбалскиот терен според внесените вредности.
 Потоа од стандарден влез се внесуваат две вредности за поместувањето на топката за x координатата и
 поместувањето на топката за у координатата. По поместувањето на топката доколку се наоѓа во голот
 се печати GOAL, доколку се наоѓа надвор од фудбалскиот терен се печати OUT и доколку се наоѓа во теренот,
 но не е гол се печати новата позиција на топката и фудбалскиот терен со новата позиција на топката.

Напомена: За репрезентација на фудбалскиот терен користете матрица.

For example:

Input	Result
5 6
2 2
2 3
2 5 3 5
0 2
- - - - - -
- - - - - -
- - i o - ]
- - - - - ]
- - - - - -
GOAL!

 */

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int i, j, m, n, x_igrac, y_igrac, x_topka, y_topka, x1_gol, y1_gol, x2_gol, y2_gol;

    scanf("%d %d", &m, &n);

    char teren[m][n];

    scanf("%d %d", &x_igrac, &y_igrac);
    scanf("%d %d", &x_topka, &y_topka);
    scanf("%d %d %d %d", &x1_gol, &y1_gol, &x2_gol, &y2_gol);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == x_igrac && j == y_igrac) {
                teren[i][j] = 'i';
            } else if (i == x_topka && j == y_topka) {
                teren[i][j] = 'o';
            } else if ((i == x1_gol && j == y1_gol) || (i == x2_gol && j == y2_gol)) {
                teren[i][j] = ']';
            } else {
                teren[i][j] = '-';
            }
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%c ", teren[i][j]);
        }
        printf("\n");
    }
    int x_pomestuvanje, y_pomestuvanje;
    scanf("%d %d", &x_pomestuvanje, &y_pomestuvanje);

    int x_novo, y_novo;

    x_novo = x_topka + x_pomestuvanje;
    y_novo = y_topka + y_pomestuvanje;

    if ((x_novo == x1_gol && y_novo == y1_gol) || (x_novo == x2_gol && y_novo == y2_gol)) {
        printf("GOAL!");
    } else if ((x_novo >= 0 && x_novo < m) && (y_novo >= 0 && y_novo < n)) {
        printf("Novata pozicija na topkata e (%d, %d)\n", x_novo, y_novo);
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (i == x_topka && j == y_topka) {
                    printf("- ");
                } else if (i == x_novo && j == y_novo) {
                    printf("o ");
                } else {
                    printf("%c ", teren[i][j]);
                }
            }
            printf("\n");
        }
    } else {
        printf("OUT!");
    }
    return 0;
}
