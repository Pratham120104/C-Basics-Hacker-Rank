#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
char ch;
char s[100],sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    getchar();
   scanf("%[^\n]%*c", sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    
    printf("%s",sen);
    /* Enter your code he;re. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
