#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int dy,gun,yas;
	
	printf("Lutfen dogum yilinizi giriniz ");scanf("%d",&dy);
	printf("G�n�m�z y�l�n� giriniz");scanf("%d",&gun);
	yas=gun-dy;
	printf("----------------\n");
	printf("Hesaplanan ya��n�z %d dir",yas);
	return 0;
}
