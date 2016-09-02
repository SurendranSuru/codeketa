
#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[100],r;
    int i=0,j;
    printf("Enter the string");
    scanf("%s",s);
    j=strlen(s)-1;
    while(i>j)
    {
        rev=s[i];
        s[i]=s[j];
        s[j]=r;
        i+1;
        j-1;
    }
    printf("Reverse is %s",r);
}
