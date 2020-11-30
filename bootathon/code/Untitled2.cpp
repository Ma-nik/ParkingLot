#include<stdio.h>

int main()
{
	char pass[50];
	int p=0;
	do
	{
		pass[p]=getch();
		if(pass[p]!='\r')
			printf("*");
		p++;
	}while(pass[p-1]!='\r');
	pass[p-1]='\0';
}
