#include <stdio.h>
#include <stdlib.h>
 
void TersSayi(int sayi)	{
	int basamak;
	printf("\nSayinin Tersi : ");
	while(sayi >= 1)	{
		basamak = sayi % 10;
		printf("%d", basamak);
		sayi /= 10;
	}
}
 
main() {
	int sayi;	
	printf("Sayi Giriniz : ");
	scanf("%d", &sayi);
 
	TersSayi(sayi);
	getche();
}
