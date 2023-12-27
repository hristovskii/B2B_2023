/*
Дадена е текстуална датотека text.txt.

Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката.
 Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран,
 секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:

IO is short for Input Output
medioio medIo song
излез:

io
ou
io
oi
io
io
6

For example:

Input	           Result
Why so serious?    io
#                  ou
                   2
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    // The # depicts EOF because we can't simulate ^d
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int is_vowel(char c) {
    switch (tolower(c)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;
    }
}

int main() {
    writeToFile();
    FILE *f;
    char c, p;
    c = p = '\0';
    int found = 0;
    if ((f = fopen("text.txt", "r")) == NULL) {
        printf("Datotekata %s ne mozhe da se otvori.\n", "text.txt");
        return -1;
    }
    while ((c = fgetc(f)) != EOF) {
        c = tolower(c);
        if (!p) {
            p = c;
            continue;
        }
        if (is_vowel(c) && is_vowel(p)) {
            printf("%c%c\n", p, c);
            found++;
        }
        p = c;
    }
    fclose(f);
    printf("%d", found);
    return 0;
}
