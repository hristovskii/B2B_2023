/*
Од тастатура се читаат знаци (од некој текст кој се состои од различни знаци и 
кој претставува некаква реченица, т.е. се состои од неколку збора составени од 
мали букви и секогаш завршува со точка) се дури не се прочита точка. 

Да се направи програма која на излез ќе ги отпечати истите зборови 
со таа разлика што на секое појавување на две согласки едно до друго ќе им ги замени местата.

Забелешка: да се претпостави дека нема зборови кои ќе имаат повеќе од две согласки едно по друго.

Пример за влез                                      Пример за излез

ako dime ima 12 evra, kje kupi chokolado.           ako dime ima 12 erva, jke kupi hcokolado

edno dve tri trinaeset.                             endo vde rti rtinaeset.

petka si e petka                                    pekta si e pekta

*/

#include<stdio.h>

int main(){
    short f = 0;
    char prev='-', next, c;
    while(1){
        scanf("%c", &next);
        if(prev=='-') prev = next;
        else if(next == '.') break;
        else{
            if(prev >= 'a' && prev <= 'z' && prev != 'a' && prev != 'e' && prev != 'i' 
            && prev != 'o' && prev != 'u'&& next >= 'a' && next <= 'z' && next != 'a'
            && next != 'e' && next != 'i' && next != 'o' && next != 'u') { f = 1; c = prev; printf("%c", next);}
            else if(f) { printf("%c", c); f = 0; }
            else printf("%c", prev);
            prev = next;
        }
    }
    putchar(prev);
    putchar(next);
    return 0;
}