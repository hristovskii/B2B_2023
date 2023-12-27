/*
Од стандарден влез се внесуваат непознат број на реченици
 претставени преку текстуални низи (стрингови) секоја не подолга од 100 знаци и секоја во нов ред.
 Програмата треба да го најде стрингот кој содржи најмногу сврзници и да го испечати
 заедно со бројот на најдените сврзници. За сврзници се сметаат сите зборови составени од една,
 две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе
 прзани места и/или интерпункциски знак.

Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција.
 Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.

Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.

Објаснување на тест примерот:
Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7 соодветно.
 Најмногу сврзници има по последната реченица па се печати бројот 7 и содржината на таа реченица.


For example:

Input
Svrznicite vo makedonskiot jazik se sluzbeni zborovi
odnosno niv gi upotrebuvame za povrzuvanje oddelni zborovi
vo ramkite na edna recenica ili poveḱe recenici vo edna slozena recenica.
Pri povrzuvanjeto, svrznicite gi izrazuvaat odnosite megju zborovite
ili megju recenicite, pa taka sprotiven odnos se iskazhuva so
ama ili no, a usloven odnos so ako itn.

Result
7: ama ili no, a usloven odnos so ako itn.

 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cleanString(char *str) {
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
}

int countConjunctions(char *str) {
    int inWord = 0;
    int len = 0;
    int conjunctions = 0;
    while (*str) {
        if (isalpha(*str)) {
            inWord = 1;
            ++len;
        } else {
            if (len <= 3 && len > 0) {
                ++conjunctions;
            }
            len = 0;
            inWord = 0;
        }
        ++str;
    }
    if (len <= 3 && inWord) {
        ++conjunctions;
    }
    return conjunctions;
}

int main() {
    char line[100];
    int maxConjunctions = 0;
    char maxLine[100];
    int first = 1;
    while (fgets(line, sizeof(line), stdin)) {
        if (first) {
            strcpy(maxLine, line);
            first = 0;
        }

        cleanString(line);
        //puts(line);
        int conjunctions = countConjunctions(line);
        if (conjunctions > maxConjunctions) {
            strcpy(maxLine, line);
            maxConjunctions = conjunctions;
        }
    }

    printf("%d: %s", maxConjunctions, maxLine);
    return 0;
}
