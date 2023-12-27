/*
 Да се напише програма во која со помошна функција што користи покажувачи,
 елементите на низата ќе се променат така што секој елемент ќе биде еднаков на
 збирот од него самиот и неговиот претходник кој е изменет според истата логика.

For example:

Input
5
1 2 3 4 5

Result
Vnesenata niza e:
1 2 3 4 5
Novata niza e:
1 3 6 10 15

 */

#include <stdio.h>

void promena(int *p, int n) {
    int i, *d = p;
    p++;
    for (i = 1; i < n; i++)
        *(p++) += *d++;
}

void pecatenje(int *p, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", (*p++));
}

int main() {
    int n, niza[100];
    scanf("%d", &n);
    int *arr = niza;
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }
    printf("Vnesenata niza e: \n");
    pecatenje(niza, n);
    promena(niza, n);
    printf("\nNovata niza e: \n");
    pecatenje(niza, n);

    return 0;
}
