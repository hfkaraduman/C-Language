#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int birler,onlar,yuzler,binler,onbinler,sayi;
	printf("Sayiyi giriniz");scanf("%d",&sayi);
	printf("---------------------\n");
	birler=sayi%10;
	onlar=(sayi/10)%10;
	yuzler=(sayi/100)%10;
	binler=(sayi/1000)%10;
	onbinler=sayi/10000;
	if(birler==onbinler && onlar==binler && yuzler==yuzler)
	{
		printf("Girilen %d sayisi palindrome",sayi);
	}
	else
	{
		printf("Girilen %d sayisi palindrome degildir",sayi);
	}
	return 0;
}
