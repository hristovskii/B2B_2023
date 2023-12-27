/*
Мартин има X денари. Тој е на пазарување во продавница каде има специјална акција. 
Акцијата гласи:

Сите производи имаат иста основна цена Y 
После купени C1 производи добивате P1 проценти попуст на секој нареден купен производ
После купени C2 производи (при што секогаш C2 > C1) добивате дополнителни P2 проценти 
попуст на секој нареден купен производ (односно вкупно P1 + P2 проценти попуст, 
при што секогаш P1 + P2 < 100)
Напишете програма која за внесени вредности за X, Y, C1, P1, C2 и P2 ќе 
пресмета и ќе отпечати колку најмногу производи може да купи Мартин, 
и колку денари ќе потроши за да ги купи 
(отпечатено со две цифри после децималната запирка).*/

#include<stdio.h>
int main() {
    int x, y, c1, p1, c2, p2;
    scanf("%d %d %d %d %d %d", &x, &y, &c1, &p1, &c2, &p2);
    float price1 = y;
    float price2 = y - y * (p1 / 100.0);
    float price3 = y - y * ((p1 + p2) / 100.0);

    int count;
    float price;

    float price_for_c1 = price1 * c1;
    float price_for_c2 = price1 * c1 + price2 * (c2 - c1);

    if (price_for_c1 >= x) {
        count = (int)(x / price1);
        price = count * price1;
    } else if (price_for_c2 >= x) {
        float remainder = x - price_for_c1;
        int price2_count = (int)(remainder / price2);
        count = c1 + price2_count;
        price = price_for_c1 + price2 * price2_count;
    } else {
        float remainder = x - price_for_c2;
        int price3_count = (int)(remainder / price3);
        count = c2 + price3_count;
        price = price_for_c2 + price3 * price3_count;
    }

    printf("%d %.2f", count, price);
    return 0;
}