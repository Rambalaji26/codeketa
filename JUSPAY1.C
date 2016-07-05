#include<stdio.h>
#include<conio.h>
void main()
{
char word[100];
int len,i;
clrscr();
scanf("%s",word);
len=strlen(word);
for(i=0;i<len;i++)
{
if(i==0 || i==len)
{
printf("%c",word[i]);
}
else
{
printf("-%c",word[i]);
}
}
getch();
}