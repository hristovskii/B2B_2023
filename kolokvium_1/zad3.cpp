/*
Од стандарден влез се чита еден природен број n. 
Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
 Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.*/

 #include <stdio.h>
int main(){
    int n,i,j;
    int maxdeliteli=0;
    int najgolembroj;
    scanf("%d", &n);
    for(i=1; i<n; i++) {
        int zbir = 0;
        for(j=1;j<i; j++){
            if (i % j == 0) {
                zbir += j;
            }
        }
        if (zbir > maxdeliteli) {
            maxdeliteli = zbir;
            najgolembroj = i;
        }
    }
printf("%d", najgolembroj);
    return 0;
}

