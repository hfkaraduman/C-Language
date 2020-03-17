#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,sayi,fak=1;
	printf("Faktoriyeli alinacak sayiyi giriniz:");scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		fak=fak*i;
	}
	printf("Faktoriyeli:%d",fak);
	return 0;
}
