#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b;
	printf("Birinci sayiyi giriiz:");scanf("%d",&a);
	printf("Ýkinci sayiyi giriniz:");scanf("%d",&b);
	if(a>b)
	{
		printf("Birinci sayi buyuk");
	}
	else
	{
		printf("Ýkinci sayi buyuk");
	}
	return 0;
}
