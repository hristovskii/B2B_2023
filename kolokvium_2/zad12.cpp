/*
 Да се напише програма во која од дадена датотека со име "input.txt"
 за секој ред ќе се отпечати бројот на цифри во тој ред, знакот :,
 па самите цифри подредени според ASCII кодот во растечки редослед.
 Редовите во датотеката не се подолги од 100 знаци.

For example:

Input
74I9BjpbhbsfX6Ai0xtnmv4csz2gNv
wtkb3Y82B9oygnG1vhRsMOuman2n894v08w4pI3e4x
p7A3pO1U70aeGxwpOptb2rie
nw01MAok4HWisf913hjtiyscgwhdr7w92lm7eddhy6ne40fHbsZc3ac
Zmwk1yrnqt0LjT6ItS2kH
kfcp3Xpxx030B0ojf2G2o4JgkTsolbxqgxkifmbwrxRevKum8tvq4FZxi9LsUM2bq3jGjuo0eu4iv6
W79qURXz32tn8gdzAmasf019JdFbVtizbwu1t09dlkLfpxF1dw7g4wqHSLgEojK27bYP
wyqzCunXvicN1D31v41hbhvmC45m69u587aW0gAZ4mvhypshmn0kVs

Result
7:0244679
14:01223344488899
6:012377
14:00112334467799
4:0126
16:0000222333444689
16:0011122347778999
15:001113444556789

 */

#include <stdio.h>
#include <ctype.h>

int digits(char *line, char *out) {
    int count = 0;
    while (*line) {
        if (isdigit(*line)) {
            *out = *line;
            ++out;
            ++count;
        }
        ++line;
    }
    *out = 0;
    return count;
}

void sort(char *line) {
    char *i;
    char *j;
    for (i = line; *i; ++i) {
        for (j = line; *(j + 1); ++j) {
            if (*j > *(j + 1)) {
                char tmp = *j;
                *j = *(j + 1);
                *(j + 1) = tmp;
            }
        }
    }
}

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    FILE *f = fopen("input.txt", "r");
    char line[100];
    char copy[100];
    while (fgets(line, 100, f) != NULL) {
        int count = digits(line, copy);
        sort(copy);
        printf("%d:%s\n", count, copy);
    }
    fclose(f);
    return 0;
}
