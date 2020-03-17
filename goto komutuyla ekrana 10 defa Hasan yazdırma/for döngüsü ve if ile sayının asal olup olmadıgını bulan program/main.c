#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,sayi,sayac=0;
	printf("Sayi giriniz:");scanf("%d",&sayi);
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			sayac=sayac+i;
		}
	}
	if(sayi!=1 && sayac==0)
	{
		printf("Girilen sayi asal");
	}

	else
	{
		printf("Asal degil");
	}
	return 0;
}
