/*
Од стандарден влез се чита еден природен број n. 
Меѓу природните броеви помали од n, 
да се најде оној чиј што збир на делители е најголем. 
При пресметување на збирот на делителите на даден број, 
да не се зема во предвид и самиот број.
*/

#include <stdio.h>

int main(){
    int n,i,delitel,zbir,broj,maksimum=0;
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
        zbir=0;
        for(delitel=1;delitel<=i/2;delitel++)
        {
            if(i%delitel==0)
                zbir+=delitel;
        }
        if(maksimum<zbir)
        {
            maksimum=zbir;
            broj=i;
        }
    }
    printf("Baraniot broj e: %d",broj);

    return 0;
}
