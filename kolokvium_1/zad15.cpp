/*
Од тастатура се внесува колку студенти полагале колоквиум и потоа се 
внесуваат поените на сите кои полагале. Програмата треба да отпечати 
средна вредност на поените на сите студенти кои имале помалку од 50 поени, 
како и список на студентите со повеќе од 50 поени. Исто така програмата да 
отпечати средна вредност на поените на сите кои положиле со најмалку 50 
поени и нивните освоени поени (редоследот на печатење во двата случаеви 
треба да биде ист како и редоследот на внесување). Максималниот број на 
студенти што може да се внесат е 1000.

Напомена: Оваа задача е за материјалот наменет за втор колоквиум и истата 
се решава со користење на низи.

Влез:

10 //Kolku studenti?

20 10 50 60 70 90 40 20 70 90 //Poeni?

Излез

Sredna vrednost na padnati 22.50

20 10 40 20 

Sredna vrednost na polozeni 71.67

50 60 70 90 70 90*/

#include <stdio.h>
int main(){
    int broj,i,sum_f=0,sum_t=0,brojac_f=0,brojac_t=0;
    float avg_f, avg_t;
    scanf("%d", &broj);
    int studenti[broj];
    for(i=0; i<broj;i++) {
        scanf("%d", &studenti[i]);
        if(studenti[i]<50) {
            brojac_f++;
            sum_f=sum_f+studenti[i];
        }
        else if(studenti[i]>=50){
            brojac_t++;
            sum_t=sum_t+studenti[i];

        }
    }
    avg_f=sum_f*1.0/brojac_f;
    avg_t=sum_t*1.0/brojac_t;
    printf("Sredna vrednost na padnati %.2f\n", avg_f);
    for(i=0; i<broj;i++) {
        if(studenti[i]<50)
            printf("%d ", studenti[i]);
    }
    printf("\n");
    printf("Sredna vrednost na polozeni %.2f\n", avg_t);
    for(i=0; i<broj;i++) {
        if(studenti[i]>=50)
            printf("%d ", studenti[i]);
    }
    return 0;
}

