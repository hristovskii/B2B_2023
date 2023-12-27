/*
Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот 
важи дека едната е помала од 5, а другата е поголема или еднаква на 5. 
На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:

a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5

Пр.  508294, 2638, 81
Од тастатура се читаат непознат број на цели броеви поголеми 
од или еднакви на 10 (броевите помали од 10 се игнорираат). 
Читањето завршува во моментот кога ќе се прочита знак што не е цифра. 
Да се испечатат сите цик-цак броеви.*/

#include <stdio.h>
int cikcak(int x) {
    int lastDigit, prevlastDigit, prevprevlastDigit, flag=1;
    if(x>10 && x<=99){
        lastDigit=x%10;
        prevlastDigit=x/10%10;
        if((lastDigit<5 && prevlastDigit>=5) || (lastDigit>=5 && prevlastDigit<5))
            return flag;

        else {
            flag=0;
            return flag;
        }
    }
    while(x>99) {
        lastDigit=x%10;
        prevlastDigit=x/10%10;
        prevprevlastDigit=x/100%10;
        if((lastDigit<5 && prevlastDigit>=5 && prevprevlastDigit<5)||(lastDigit>=5 && prevlastDigit<5 && prevprevlastDigit>=5))
            x/=10;

        else {
            flag=0;
            break;
        }
    }
    return flag;
}

int main() {
    int n;
    while(scanf("%d", &n)) {
        if(n<=10) continue;

        if(cikcak(n)) printf("%d\n", n);
    }
    return 0;
}