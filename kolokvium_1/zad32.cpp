/*
Од стандарден влез се внесува даден број X,  
а потоа се внесуваат броеви додека не се внесе 
нешто различно од број. За секој од броевите да се провери 
дали неговиот број на цифри е еднаков со бројот на цифри на Х, 
и доколку условот е исполнет, да се испечати.*/

#include <stdio.h>

int main(){
    int x,broj,brCifri,brCifriX=0,temp;
    scanf("%d",&x);
    
    temp=x;
    
    while(temp>0)
    {
        brCifriX++;
        temp/=10;
    }
    
    while(scanf("%d",&broj))
    {
        brCifri=0;
        temp=broj;
        while(temp>0)
        {
            brCifri++;
            temp/=10;
        }
        
        if(brCifri == brCifriX)
        {
            printf("%d\n",broj);
        }
        
    }

    return 0;
}
