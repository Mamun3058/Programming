#include <stdio.h>
int main()
{
    int ih, im, et, em, a, b;
    scanf("%d %d %d %d", &ih, &im, &et, &em);
    b = et - ih;
    if (b < 0)
    {
        b = 24 + (et - ih);
    }
    a = em - im;
    if (a < 0)
    {
        a = 60 + (em - im);
        b--;
    }
    if (et == ih && em == im)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", b, a);
    return 0;
}
