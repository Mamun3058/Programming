#include <bits/stdc++.h>
using namespace std;
void era(char str[100])
{
    char *id = strtok(str, " ");
    while (id != NULL)
    {
        printf("%s\n", id);
        printf("\n");
        id = strtok(NULL, " ");
    }
}
int main()
{
    char str[100] ;
    scanf("%[^\n]", &str);
    era(str);
    return 0;
}
