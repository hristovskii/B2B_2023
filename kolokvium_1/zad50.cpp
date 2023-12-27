/*
Се внесува време во интернационална форма 
(4 вредности: час - од 1 до 12, минути – од 0 до 59, 
секунди – од 0 до 59, и знак А ако е од полноќ до 
претпладне или Р ако е од пладне до полноќ). 
Да се презентира времето во македонска форма во 
која 0 часот стои наместо 12 на полноќ, од 13 часот 
до 23 стојат за попладневните од 1 до 11 за претпладневните.

Формата за точен излез може да се види во тест примерите.
*/

#include <stdio.h>

void convertMorningPeriod(int hh, int mm, int ss){
    if(hh == 12) {
        printf("%02d:%02d:%02d",hh-12,mm,ss);
    }
    else {
        printf("%02d:%02d:%02d",hh,mm,ss);
    }
}

void convertAfternoonPeriod(int hh, int mm, int ss){
    if(hh == 12) {
        printf("%02d:%02d:%02d",hh,mm,ss);
    }
    else {
        printf("%02d:%02d:%02d",hh+12,mm,ss);
    }
}

void convertTime(int hh, int mm, int ss, char period){
    if(period == 'A') {
        convertMorningPeriod(hh, mm, ss);
    }
    else {
        convertAfternoonPeriod(hh, mm, ss);
    }
}

int main() {

    int hh, mm, ss;
    char period;

    scanf("%d %d %d %c", &hh, &mm, &ss, &period);


    convertTime(hh, mm, ss, period);

    return 0;
}
