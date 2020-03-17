#include<stdio.h>

int mukemmel_mi(int sayi)
{

int i,toplam=0;
for(i=1;i<sayi;i++)
{
	
	if(sayi%i==0)
	{
		toplam=toplam+i;
	}
}
if(toplam==sayi)
{
	return 1;
}
else 
{
	return 0;
}
}

int main()
{
	int giris;
	printf("Mukemmel sayilar:\n");
	for(giris=1;giris<=1000;giris++)
	{
		if(mukemmel_mi(giris))
		{
			printf("mukemmel:%d\n",giris);
		}
	}
}
