#include<stdio.h>

void kupunual(int *);

int main()
{
	int sayi=5;
	printf("Sayi:%d",sayi);
	kupunual(&sayi);
	printf("\nKupu:%d",sayi);
}

void kupunual(int *nPtr)
{
	*nPtr=*nPtr**nPtr**nPtr;
}
