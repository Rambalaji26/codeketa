#include <stdio.h>
#include <conio.h>
int  count_str(char sent[1000])
{
    int i=0,count=0;
    while(sent[i]!='\0')
    {	
	if(sent[i]==' ')
		 count++;
		   i++;
    }
    if(count==0)
	return count;
else
	return count+1;
	}
int main(void) {
    char sent[1000];
     scanf("%[^\n]s",sent);
       printf("%d",count_str(sent));

    getch();
}