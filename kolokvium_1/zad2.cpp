/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. 
Обратен број е бројот составен од истите цифри,
 но во обратен редослед (на пример, 653 е обратен број на бројот 356). 
 Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати 
 најголемиот природен број помал од n кој што е „интересен“.
 Ако внесениот број не е валиден,
  да се отпечати соодветна порака (Brojot ne e validen). */

  #include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n<=9) {
        printf("Brojot ne e validen");
    }
    else {
        int interesen;
        for(int i=1; i<n; i++) {
            int brojac=0;
            int tmp=i;
            int obraten=0;

            while (tmp) {
                obraten =(obraten* 10)+(tmp % 10);
                brojac++;
                tmp /= 10;
            }
            if (obraten % brojac == 0) {
                interesen=i;
            }
        }
        printf("%d", interesen);
    }
    return 0;
}