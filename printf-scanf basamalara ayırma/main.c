#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayi,birler,onlar,yuzler,binler;
	
	printf("Çozumlenecek sayi (maksimum 4 haneli)=");scanf("%d",&sayi);
	printf("------------------------------\n");
	printf("Verilen %d sayisinda:\n",sayi);
	birler=sayi%10;
	onlar=(sayi/10)%10;
	yuzler=(sayi/100)%10;
	binler=(sayi/1000);
	printf("%d tane binlik\n",binler);
	printf("%d tane yuzluk\n",yuzler);
	printf("%d tane onluk\n",onlar);
	printf("%d tane de birlik vardir\n",birler);
	return 0;
}
