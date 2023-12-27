/*
Од стандарден влез се чита четирицифрен број. 
Да се испечати 1 доколку цифрите во бројот се во строго растечки редослед, 
во спротивно да се испечати 0.*/

#include <stdio.h>

int main(){
    int broj, prvaCifra, vtoraCifra, tretaCifra, poslednaCifra;
    scanf("%d", &broj);
    
    prvaCifra = broj/1000;
    vtoraCifra = broj/100%10;
    tretaCifra = broj/10%10;
    poslednaCifra = broj%10;
    
    printf("%d", prvaCifra < vtoraCifra && vtoraCifra < tretaCifra && tretaCifra < poslednaCifra);

    return 0;
}