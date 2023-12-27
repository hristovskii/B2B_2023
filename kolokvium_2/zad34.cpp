/*
 Од стандарден влез се чита број n а потоа се чита и низа составена од n реални броеви.
 На екран да се испечати елементот кој што е најблиску до средната вредност на елементите на низата.

For example:

Input	                             Result
6                                    38.20
64.1 58.0 38.2 9.0 60.5 18.5
 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float niza[n], avg = 0, diff = 0, el = 0;
    for (int i = 0; i < n; i++) {
        scanf("%f", &niza[i]);
        avg += niza[i];
    }
    avg /= n;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            diff = avg - niza[i];
            el = niza[i];
            if (diff < 0)
                diff *= -1;
        }
        float r = avg - niza[i];
        if (r < 0)
            r *= -1;
        if (diff > r) {
            diff = r;
            el = niza[i];
        }
    }
    printf("%.2f", el);
    return 0;
}
