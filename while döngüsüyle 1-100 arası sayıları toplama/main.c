#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayac=1,toplam=0;
	while(sayac<=100)
	{
		
		toplam=toplam+sayac;
			sayac=sayac++;
	
		
	}
	printf("%d",toplam);
	
	
	
	return 0;
}
