#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
sagdankirp(int *,int);

int main(int argc, char *argv[]) 
{
	int sayi;
	int miktar;
	
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
	printf("Sagdan kirpilacak basamak sayisi:");
	scanf("%d",&miktar);
	
	sagdankirp(&sayi,miktar);
	
	printf("sayinin kirpilmis hali:%d\n",sayi);
	return 0;
}

sagdankirp(int *sayip,int n)
{
	while(n>0)
	{
		*sayip=*sayip/10;
		n--;
	}
}
