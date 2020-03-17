#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int dogru,yanlis,net,kur;
	printf("Dogru sayinizi giriniz");scanf("%d",&dogru);
	printf("Yanlis sayinizi giriniz");scanf("%d",&yanlis);
	printf("---------------------------\n");
	net=dogru-(yanlis/4);
	printf("Net Sayininz=%d\n",net);
	if(net<10)
	{
		printf("Kurunuz:Intermediate");
	}
	else if(net>=10 && net<30)
	{
		printf("Kurunuz:Elementary");
	}
	else if(net>=30 && net<50)
	{
		printf("Kurunuz:Preintermediate");
	}
	else if(net>=50 && net<70)
	{
		printf("Kurunuz:Intermediate");
	}
	else
	{
		printf("Kurunuz:Upper");
	}
	return 0;
}
