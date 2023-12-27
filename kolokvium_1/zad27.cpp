/*
За еден студент се читаат освоени поени од 5 активности за еден предмет. 
Услов за еден предмет да биде положен е да се имаат над 50 освоени поени. 
Ако студентот има 0-50 поени не го положил предметот, 
ако има 51-60 го положил со 6, 
61-70 го положил со 7, 71-80 го положил со 8, 
81-90 го положил со 9 и над 90 го положил со 10. 
Да се испечати оценката која ја имал студентот,
неговите поени и да се испечати 1 доколку има услов да добие повисока оценка, 
а во спротивно 0. Услов за повисока оценка има само ако недостига 1 поен за 
добивање на повисока оценка.*/

#include <stdio.h>

int main(){
    int p1, p2, p3, p4, p5;
    scanf("%d%d%d%d%d", &p1, &p2, &p3, &p4, &p5);
    int points=p1+p2+p3+p4+p5;
    if(points<=50)
        printf("Predmetot ne e polozen\n");
    else if(points>50&&points<=60)
        printf("Ocenka: 6, poeni: %d\n", points);
    else if(points>60&&points<=70)
        printf("Ocenka: 7, poeni: %d\n", points);   
    else if(points>70&&points<=80)
        printf("Ocenka: 8, poeni: %d\n", points); 
    else if(points>80&&points<=90)
        printf("Ocenka: 9, poeni: %d\n", points); 
    else if(points>90)
        printf("Ocenka: 10, poeni: %d\n", points); 
    if(points%10==0&&points!=50&&points!=100)
        printf("Ima uslov za povisoka ocenka");
    else if(points>50&&points!=100)
        printf("Nema uslov za povisoka ocenka");
    return 0;
}
