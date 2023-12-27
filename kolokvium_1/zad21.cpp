/*
Да се напише програма во која што се внесува еден четирицифрен и еден 
трицифрен број. Да се отпечати 1 доколку сумата на цифрите на првиот 
број е поголема од сумата на цифрите на вториот број, во спротивно 0. */

#include <stdio.h>

int main(){
    int fourDigit, threeDigit;
    scanf("%d%d", &fourDigit, &threeDigit);
    int sum1=0, sum2=0;
    while(fourDigit!=0)
    {
        sum1=fourDigit%10;
        fourDigit/=10;
    }
    while(threeDigit!=0)
    {
        sum2=threeDigit%10;
        threeDigit/=10;
    }
    printf("%d", sum1>sum2);
    return 0;
}