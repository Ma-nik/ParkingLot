#include<stdio.h>
#include<string.h>
int two[2][50]={0};
int four[2][50]={0};
alloc(int tokennum,int type)
{
	if(type==1)
  		printf("\nToken --->\t%d \n\nType ----->\tFOUR WHEELER",tokennum);
  	else
  		printf("\nToken --->\t%d \n\nType ----->\tTWO WHEELER",tokennum);
	int i,j;
	int a=0,b=0,co=0;
	if(type==2)
	{
		for(i=0;i<2;i++)
		{
			for( j=0;j<50;j++)
			{
			if(two[i][j]==0)
				{
					two[i][j]=tokennum;
					a=i;
					b=j;
					co++;
					
				goto a;
				}	
			}
		}
		if(co==0)
		{
			printf("FULL\n");
			goto e;
		}
		
		
		a:	if(a==0)
		printf("\n\nAllocated in A%d\n\n",b+1)	;
		else if(a==1)
		printf("\n\nAllocated in B%d\n\n",b+1)	;
		e:for(i=0;i<2;i++)
		{
			for( j=0;j<50;j++)
			{
				if(two[i][j]==0)
				printf("| ");
				else
				printf("* ");
			}
			printf("\n");
		}sleep(5);
	}
		else if(type==1)
		{
		for(i=0;i<5;i++)
		{
			for( j=0;j<50;j++)
			{
				if(four[i][j]==0)
				{
					four[i][j]=tokennum;
					a=i;
					b=j;
					goto c;
				}	
			}
		}
		
		c:	if(a==0)
		printf("\n\nAllocated in A%d\n\n",b+1);
		else if(a==1)
		printf("\n\nAllocated in B%d\n\n",b+1);	
		
		for(i=0;i<2;i++)
		{
			for( j=0;j<50;j++)
			{
				if(four[i][j]==0)
				printf("| ");
				else
				printf("* ");
			}
			printf("\n");
		}
	}
		

	
}

dealloc(int tokennum,int type){ int i,j;
if(type==1)
	{
		for(i=0;i<2;i++)
		{
			for( j=0;j<50;j++)
			{
				if(two[i][j]==tokennum)
				{
					two[i][j]=0;
					goto a;
				}
			}
		}
		a:for(i=0;i<2;i++)
		  {
			for( j=0;j<50;j++)
			{
				if(two[i][j]==0)
				printf("| ");
				else
				printf("* ");
			}
			printf("\n");
		}
	}
	else if(type==0)
	{
		for(i=0;i<2;i++)
		{
			for( j=0;j<50;j++)
			{
				if(four[i][j]==tokennum)
				{
					four[i][j]=0;
					goto iu;
				}
			}
		}
		iu:for(i=0;i<2;i++)
		  {
			for( j=0;j<50;j++)
			{
				if(four[i][j]==0)
				printf("| ");
				else
				printf("* ");
			}
			printf("\n");
		}
	}
}

