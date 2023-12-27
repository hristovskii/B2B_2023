/*
 Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци.
 Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место),
 а секоја од нив не е подолга од 80 знаци.

Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа,
 којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак.
 Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов,
 се печати првата низа којашто го задоволува условот.

Влез:

9

a!bcdedcb!a

Kfd?vsvv98_89vvsv?dfK

Ccsvsdvdfv

342425vbbcb

352!2353696969625

gdg??dfg!!

5336346644747

8338736767867

12344321

Излез:

Kfd?vsvv98_89vvsv?dfK



For example:

Input	                       Result
9                              Kfd?vsvv98_89vvsv?dfK

a!bcdedcb!a
Kfd?vsvv98_89vvsv?dfK
Ccsvsdvdfv
342425vbbcb
352!2353696969625
gdg??dfg!!
5336346644747
8338736767867
12344321

 ___________________________________________________________
Input	                       Result
7                              !bananab!

?!W2sse2W!?
352!2353696969625
gdg??dfg!!
!bananab!
5336346644747
8338736767867
1123443211
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100], maxStr[100];
    int maxLen = 0;
    int i,n,j,z,najdenaNiza =0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        int daliPalindrom = 1, daliSpecijalen = 0;
        for(j=0,z=strlen(str)-1;j<strlen(str);j++,z--)
        {
            if(!isalnum(str[j])&&!isspace(str[j]))
            {
                daliSpecijalen = 1;
            }
            if(str[j]!=str[z])
            {
                daliPalindrom = 0;
            }
        }
        if(daliPalindrom==1&&daliSpecijalen==1&&strlen(str)>maxLen)
        {
            maxLen = strlen(str);
            strcpy(maxStr,str);
            najdenaNiza = 1;
        }
    }
    if(najdenaNiza == 1)
    {
        printf("%s",maxStr);
    }
    else
        printf("Nema!");
}
