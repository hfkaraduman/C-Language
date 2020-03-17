#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fhesapla(int );

int main(int argc, char *argv[]) {
	int sayi;
	printf("Bir sayi giriniz:\n");
	scanf("%d",&sayi);
//	fhesapla(&sayi);
	printf("\nFaktoriyeli:%d",fhesapla(sayi));
	return 0;
}
int fhesapla(int a)
{
	int i,faktoriyel=1;
	for(i=a;i>=1;i--)
	{
		faktoriyel=i*faktoriyel;
	}
	return faktoriyel;
	
}
