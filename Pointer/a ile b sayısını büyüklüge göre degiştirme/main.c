#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
void takas(int,int);

int main(int argc, char *argv[]) 
{
	
	int a=5;
	int b=7;
	printf("a=%d\tb=%d",a,b);
	takas(a,b);
	printf("\na=%d\tb=%d",a,b);
		
	return 0;
}
void takas(int x,int y)
{
	int yedek;
	if(x>y)
	{
		yedek=x;
		y=x;
		x=yedek;
	}
}*/
void takas(int *,int *);

int main()
{
	int a=5;
	int b=7;
	printf("a=%d\tb=%d",a,b);
	takas(&a,&b);
	printf("\na=%d\tb=%d",a,b);
}

void takas(int *x,int *y)
{
	int  yedek;
	if( * x> * y);
	{
	 	 yedek=* x;
		 * x=* y;
		 * y= yedek;	
	}
}



















