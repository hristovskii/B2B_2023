/*
Од стандарден влез се читаат знаци се додека не се прочита извичник. 
Во вака внесениот текст се скриени цели броеви (помали од 100).
 Да се напише програма што ќе ги прочита сите знаци и на излез ќе 
 го испечати збирот на сите броеви скриени во текстот.*/

 #include <stdio.h>
int main(){
    char znak;
    int suma=0, flag=0, vrednost=0;
    while(1){
        scanf("%c", &znak);
        if(znak=='!') break;

        if(flag==0 && znak>='0' && znak<='9'){
            flag=1;
            vrednost=znak-'0';
        }
        else if(flag==1 && znak>='0' && znak<='9'){
            vrednost= vrednost*10+znak-'0';
        }
        else if(!(znak>='0' && znak<='9')){
            suma=suma+vrednost;
            vrednost=0;
            flag=0;
        }
    }
    suma=suma+vrednost;
    printf("%d", suma);
    return 0;
}

