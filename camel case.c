#include<stdio.h>
#include<string.h>
int main()
        {
        char s[50];
        scanf("%s",s);
        int i,c=0;
        for(i=0;s[i]!='\0';i++)
                {
                if(s[i]>='A'&&s[i]<='Z')
                        c++;
                 }
        printf("%d\n",c+1);
        return 0;

        }
