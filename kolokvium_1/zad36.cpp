/*
Од стандарден влез се читаат два природни броеви a и b. 
Да се испечати бројот од (а,b) кој што има најмал број 
на делители и бројот што има најголем број на  делители. 
Ако постојат повеќе броеви со ист број на делители да се испечати последниот. 
*/

#include <stdio.h>

int main(){
    int a, b, min, max=0, minNum, minMax, total;
    scanf("%d%d", &a, &b);
    for(int i=a+1; i<b; i++)
    {
        total=0;
        for(int y=1; y<=i; y++)
        {
            if(i%y==0)
                ++total;
        }
        if(total<=min||min==0)
        {
            min=total;
            minNum=i;
        }
        if(total>=max)
        {
            max=total;
            minMax=i;
        }
    }
    printf("Min: %d\nMax: %d", minNum, minMax);
    return 0;
}