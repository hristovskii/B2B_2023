/*
Да се напише програма која за дадени поени од испити по 5 предмети внесени преку стандарден влез ќе пресмета оцена по секој предмет и вкупен просек на студентот според оцените(заокружен на две децимали).

Оценa    Поени 
 5            0-49
 6            50-59
 7            60-69
 8            70-79
 9            80-89
 10          90-100*/

 #include<stdio.h>
int main(){
    int poeni1, poeni2, poeni3, poeni4, poeni5;
    scanf("%d %d %d %d %d", &poeni1, &poeni2, &poeni3, &poeni4, &poeni5);
    int ocena1, ocena2, ocena3, ocena4, ocena5;
    if(poeni1 < 50)
    {
        ocena1 = 5;
    }
    else if(poeni1 >= 50 && poeni1 < 60)
    {
        ocena1 = 6;
    }
    else if(poeni1 >= 60 && poeni1 < 70)
    {
        ocena1 = 7;
    }
    else if(poeni1 >=70 && poeni1 < 80)
    {
        ocena1 = 8;
    }
    else if(poeni1 >= 80 && poeni1 < 90)
    {
        ocena1 = 9;
    }
    else if(poeni1 >=90 && poeni1 <= 100)
    {
        ocena1 = 10;
    }
    if(poeni2 < 50)
    {
        ocena2 = 5;
    }
    else if(poeni2 >= 50 && poeni2 < 60)
    {
        ocena2 = 6;
    }
    else if(poeni2 >= 60 && poeni2 < 70)
    {
        ocena2 = 7;
    }
    else if(poeni2 >=70 && poeni2 < 80)
    {
        ocena2 = 8;
    }
    else if(poeni2 >= 80 && poeni2 < 90)
    {
        ocena2 = 9;
    }
    else if(poeni2 >=90 && poeni2 <= 100)
    {
        ocena2 = 10;
    }
    if(poeni3 < 50)
    {
        ocena3 = 5;
    }
    else if(poeni3 >= 50 && poeni3 < 60)
    {
        ocena3 = 6;
    }
    else if(poeni3 >= 60 && poeni3 < 70)
    {
        ocena3 = 7;
    }
    else if(poeni3 >=70 && poeni3 < 80)
    {
        ocena3 = 8;
    }
    else if(poeni3 >= 80 && poeni3 < 90)
    {
        ocena3 = 9;
    }
    else if(poeni3 >=90 && poeni3 <= 100)
    {
        ocena3 = 10;
    }
    if(poeni4 < 50)
    {
        ocena4 = 5;
    }
    else if(poeni4 >= 50 && poeni4 < 60)
    {
        ocena4 = 6;
    }
    else if(poeni4 >= 60 && poeni4 < 70)
    {
        ocena4 = 7;
    }
    else if(poeni4 >=70 && poeni4 < 80)
    {
        ocena4 = 8;
    }
    else if(poeni4 >= 80 && poeni4 < 90)
    {
        ocena4 = 9;
    }
    else if(poeni4 >=90 && poeni4 <= 100)
    {
        ocena4 = 10;
    }
    if(poeni5 < 50)
    {
        ocena5 = 5;
    }
    else if(poeni5 >= 50 && poeni5 < 60)
    {
        ocena5 = 6;
    }
    else if(poeni5 >= 60 && poeni5 < 70)
    {
        ocena5 = 7;
    }
    else if(poeni5 >=70 && poeni5 < 80)
    {
        ocena5 = 8;
    }
    else if(poeni5 >= 80 && poeni5 < 90)
    {
        ocena5 = 9;
    }
    else if(poeni5 >=90 && poeni5 <= 100)
    {
        ocena5 = 10;
    }
    int zbir = 0;
    zbir = ocena1+ocena2+ocena3+ocena4+ocena5;
    printf("%d %d %d %d %d\n%.2f", ocena1, ocena2, ocena3, ocena4, ocena5, zbir/5.0);
}
