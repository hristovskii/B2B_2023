/*
Милан и Марко играат повеќе партии „модифициран финки“ 
покер (само со картите J, Q, K и A). 
Победник на секоја партија покер е оној играч чии карти имаат 
поголем збир (J=12, Q=13, K=14 и A=15). На стандарден влез првин 
се внесува бројот n број на партии кои биле одиграни од Милан и Марко. 
Потоа Влатко во следните n партии дели по 4 карти (пр. J A K Q), 
каде првите две карти се картите на Милан (J и A, збир 27), 
другите две карти се карти на Марко (K и Q, збир 27). 
За секоја партија соодветно да се испечати името на победникот во нов ред, 
доколку Милан и Марко имаат ист збир на карти да се испечати Neresheno. 
Во последен ред да се испечати бројот на победи на Милан и Марко оделени со празно место.
*/

#include<stdio.h>
int main(){
    int n,i,zbirMilan,zbirMarko,pobediMilan=0,pobediMarko=0;
    char a,b,c,d;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        zbirMilan=0;
        zbirMarko=0;
        scanf("\n%c %c %c %c",&a,&b,&c,&d);
        if(a=='J')
            zbirMilan+=12;
        else if(a=='Q')
            zbirMilan+=13;
        else if(a=='K')
            zbirMilan+=14;
        else if(a=='A')
            zbirMilan+=15;

        if(b=='J')
            zbirMilan+=12;
        else if(b=='Q')
            zbirMilan+=13;
        else if(b=='K')
            zbirMilan+=14;
        else if(b=='A')
            zbirMilan+=15;

        if(c=='J')
            zbirMarko+=12;
        else if(c=='Q')
            zbirMarko+=13;
        else if(c=='K')
            zbirMarko+=14;
        else if(c=='A')
            zbirMarko+=15;

        if(d=='J')
            zbirMarko+=12;
        else if(d=='Q')
            zbirMarko+=13;
        else if(d=='K')
            zbirMarko+=14;
        else if(d=='A')
            zbirMarko+=15;

        if(zbirMilan>zbirMarko){
            printf("Milan\n");
            pobediMilan++;
        }
        else if(zbirMilan<zbirMarko){
            printf("Marko\n");
            pobediMarko++;
        }
        else{
            printf("Neresheno\n");
        }
    }
    printf("%d %d",pobediMilan,pobediMarko);
}
