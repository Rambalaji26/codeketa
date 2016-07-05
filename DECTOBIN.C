#include<stdio.h>
#include<conio.h>
void main()
{
int dec,temp,rem,i=1;
int bin=0;
scanf("%d",&dec);
temp=dec;
while(temp!=0)
{
rem=temp%2;
bin=bin+rem*i;
temp=temp/2;
i=i*10;
}
printf("%d",bin);
getch();
}