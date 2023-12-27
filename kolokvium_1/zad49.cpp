/*
Од тастатура се читаат знаци (од некој текст кој се состои од различни 
знаци и кој претставува некаква реченица, 
т.е. се состои од неколку збора составени од мали букви и 
секогаш завршува со точка) се дури не се прочита точка. 

Да се направи програма која на излез ќе ги отпечати истите 
зборови со таа разлика што во зборовите кои имаат исти букви 
една до друга, првата буква ќе ја отпечати како голема буква.

Забелешка: да се претпостави дека нема зборови кои ќе 
имаат повеќе од две исти букви едно по друго.

Пример за влез                                      Пример за излез

koga ana ili goran oro igraat site gledaat.         koga ana ili goran oro igrAat site gledAat.

igrame i peeme celo vreme                           igrame i pEeme celo vreme

poddrska davame samo na pravednite.                 poDdrska davame samo na pravednite
*/

#include<stdio.h>

int main(){
    char prev='-', next;
    while(1){
        scanf("%c", &next);
        if(prev=='-') prev = next;
        else if(next == '.') break;
        else{
            if(next == prev && next >= 'a' && next <= 'z') printf("%c", 'A' + prev - 'a');
            else printf("%c", prev);
            prev = next;
        }
    }
    putchar(prev);
    putchar(next);
    return 0;
}