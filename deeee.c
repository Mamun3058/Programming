#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,b,c,d,e,f,g,h,T,i,s=0;

scanf("%d",&T);

if(T<=100)
{
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>0)
        {
            s+=a;
        }
        if(b>0)
        {
            s+=b;
        }
        if(c>0)
        {
            s+=c;
        }
        printf("Family %d: %d\n",i,s);
        s=0;
    }
}

return 0;

}

