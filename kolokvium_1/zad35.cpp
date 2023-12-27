/*
Од тастатура се читаат два цели броеви a, b. 
Да се испечатат сите парни броеви кои што се деливи 
со 7 и сите непарни броеви кои што не се деливи со 3 во опсег (а, b]. 
Ако вакви броеви не постојат да се испечати 0, 
а во спротивно да се испечати колкав процент од броевите 
ги исполнуваат условите(односно ќе бидат испечатени).*/

#include <stdio.h>

int main(){
    int a, b, total=0;
    scanf("%d%d", &a, &b);
    for(int i=a+1; i<=b; i++)
    {
        if(i%2==0 && i%7==0)
        {
            printf("%d\n", i);
            ++total;
        }
        if(i%2!=0 && i%3!=0)
        {
            printf("%d\n", i);
            ++total;
        }
    }
    if(total==0)
    {
        printf("0");
    }
    else 
    {
        printf("%.2f%%", total*1.0/(b-a)*100.0);
    }
    return 0;
}