#include<stdio.h>
#include<stdbool.h>

int countodd(int);

int main()
{
	int ivalue=0;
	int iret=0;
	
	printf("enter a number:\n");
	scanf("%d",&ivalue);
	
	iret=countodd(ivalue);
	printf("%d",iret);
	return 0;
}

int countodd(int ino)
{
	int idigit=0,icnt=0;
	if(ino<0)
	{
		ino=-ino;
	}
	
	while(ino!=0)
	{
		idigit=ino%10;
		if((idigit%2)!=0)
		{
			icnt++;
		}
		ino=ino/10;
	}
	
	return icnt;
}