#include<stdio.h>
#include<string.h>
void main()
{
char arr[20]="25525511135";
int l,k=0,i=0;
l=strlen(arr);
while(i<=5)
if(k<3)
{
printf("%c",arr[i]);
k++;
i++;
}
else
{
printf(".");
k=0;
}
while(i>5)
if(k<2)
{
printf("%c",arr[i]);
k++;
i++;
}
else
{
printf(".");
k=0;
}
}
