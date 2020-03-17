#include <stdio.h>

int asal_kontrol(int sayi)
{
	int i;
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main() {
	int giris;
	printf("Asal sayýlar:\n");
	for(giris=2;giris<=1000;giris++)
	{
		if(asal_kontrol(giris))
		{
			printf("asal:%d\n",giris);
		}
	}
}
