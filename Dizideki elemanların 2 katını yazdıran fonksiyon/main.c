//kendisine verilen dizi elamanlarýný 2 ile çarpýp ekrana yazdýran fonksiyon
#include<stdio.h>

ikikati(int[],int);

int main()
{
	int sayilar[5]={0,1,2,3,4};
	int i;
	
	printf("Orjinal Dizinin Degerleri\n");
	for(i=0;i<5;i++)
	{
		printf("%3d",sayilar[i]);
	}
	printf("\n\n");
	
	ikikati(sayilar,5);
}

ikikati(int a[],int b)
{
	int i;
	printf("Dizinin Degerlerinin 2 kati;\n");
	for(i=0;i<b;i++)
	{
		printf("%3d",a[i]*=2);
	}
}
