/*
 Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци.
 На почетокот на програмата се читаат два цели броеви:

N - бројот на низи од знаци кои ќе се читаат и
X - поместување.
Секоја од вчитаните низи од знаци треба да се трансформира на тој начин
 што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква
 поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката,
 се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.

Трансформацијата да се имплементира со посебна рекурзивна функција.

Пример:

Welcome -> трансформирано со поместување 5 -> Bjqhtrj

For example:

Input
16 1
Sheets of empty canvas, untouched sheets of clay
Were laid spread out before me as her body once did.
All of five horizons revolved around her soul as the earth to the sun
Now the air I tasted and breathed has taken a turn
Ooh, and all I taught her was everything
Ooh, I know she gave me all that she was
And now my bitter hands chafe beneath the clouds of what was everything.
Oh, the pictures have all been washed in black, tattooed everything...
I take a walk outside, I'm surrounded by some kids at play
I can feel their laughter, so why do I sear?
Oh, and twisted thoughts that spin round my head, I'm spinning, oh,
I'm spinning, how quick the sun can drop away
And now my bitter hands cradle broken glass of what was everything
All the pictures have all been washed in black, tattooed everything...
All the love gone bad turned my world to black
Tattooed all I see, all that I am, all I'll be... yeah...

Result
Tiffut pg fnquz dbowbt, voupvdife tiffut pg dmbz
Xfsf mbje tqsfbe pvu cfgpsf nf bt ifs cpez podf eje.
Bmm pg gjwf ipsjapot sfwpmwfe bspvoe ifs tpvm bt uif fbsui up uif tvo
Opx uif bjs J ubtufe boe csfbuife ibt ublfo b uvso
Ppi, boe bmm J ubvhiu ifs xbt fwfszuijoh
Ppi, J lopx tif hbwf nf bmm uibu tif xbt
Boe opx nz cjuufs iboet dibgf cfofbui uif dmpvet pg xibu xbt fwfszuijoh.
Pi, uif qjduvsft ibwf bmm cffo xbtife jo cmbdl, ubuuppfe fwfszuijoh...
J ublf b xbml pvutjef, J'n tvsspvoefe cz tpnf ljet bu qmbz
J dbo gffm uifjs mbvhiufs, tp xiz ep J tfbs?
Pi, boe uxjtufe uipvhiut uibu tqjo spvoe nz ifbe, J'n tqjoojoh, pi,
J'n tqjoojoh, ipx rvjdl uif tvo dbo espq bxbz
Boe opx nz cjuufs iboet dsbemf csplfo hmbtt pg xibu xbt fwfszuijoh
Bmm uif qjduvsft ibwf bmm cffo xbtife jo cmbdl, ubuuppfe fwfszuijoh...
Bmm uif mpwf hpof cbe uvsofe nz xpsme up cmbdl
Ubuuppfe bmm J tff, bmm uibu J bn, bmm J'mm cf... zfbi...
 */
#include <stdio.h>

void cipher(char *word, int x) {
    if (*word == 0) return;
    if (isalpha(*word)) {
        char first = 'a';
        if (isupper(*word))
            first = 'A';
        *word = first + (*word + x - first) % 26;
    }
    cipher(++word, x);
}

int main() {
    int n, x;
    scanf("%d %d\n", &n, &x);
    int i;
    char word[80];
    for (i = 0; i < n; ++i) {
        gets(word);
        cipher(word, x);
        printf("%s\n", word);
    }
    return 0;
}
