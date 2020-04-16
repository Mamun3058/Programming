#include <stdio.h>
int x, a, b=21, s=14;
char spc=' ', c='^', cc='|', ccc='*';
void pattern1 ()
{
    for(x=1;x<=1;x++){
        for(a=1;a<=18;a++) printf("%c", spc);
        for(a=1;a<=20;a++) printf("%c",cc);
        printf("\n");
    }
}
void pattern2 ()
{
    for(x=1;x<=2;x++){
        for(a=1;a<=18;a++) printf("%c", spc);
        for(a=1;a<=7;a++) printf ("%c",cc);
        for(a=1;a<=6;a++) printf("%c", spc);
        for(a=1;a<=7;a++) printf ("%c",cc);
        printf("\n");
    }
}
main()
{   printf("\n\n");
    for(x=1; x<=5; x++){
        for(a=1;a<=b;a++) printf("%c",spc);
        for(a=1;a<=s;a++) printf("%c",c);
        printf("\n");
        s+=2; b--;

    }
    pattern1();
    pattern2();
    for(x=1;x<=3;x++){
        for(a=1;a<=18;a++) printf("%c",spc);
        for(a=1;a<=2;a++) printf("%c",cc);
        for(a=1;a<=3;a++) printf("%c",spc);
        for(a=1;a<=2;a++) printf("%c",cc);
        for(a=1;a<=6;a++) printf("%c",spc);
        for(a=1;a<=2;a++) printf("%c",cc);
        for(a=1;a<=3;a++) printf("%c",spc);
        for(a=1;a<=2;a++) printf("%c",cc);
        printf("\n");
    }
    pattern2();
    pattern1();
    for(x=1;x<=2;x++){
        for(a=1;a<=17;a++) printf("%c",spc);
        for(a=1;a<=22;a++) printf("%c",ccc);
        printf("\n");
    }
    printf("\n\n");
}
