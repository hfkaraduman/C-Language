#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayi,bolen,sayac=0;
	printf("Bir sayi giriniz:");scanf("%d",&sayi);
	for(bolen=1;bolen<sayi;bolen++)
	    if(sayi%bolen==0)
	    {
	    	sayac=sayac+bolen;
	    }
	if(sayac==sayi)
	{
		printf("\nsayi mukemmel");
	}    
	else
	{
		printf("\nsayi mukemmel degil");
	}
	return 0;
}
