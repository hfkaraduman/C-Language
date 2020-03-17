#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int vize,final,ortalama;
	printf("Vize notunuzu giriniz:");scanf("%d",&vize);
	printf("Final notunuzu giriniz:");scanf("%d",&final);
	ortalama=(vize*0.4)+(final*0.6);
	if(ortalama>=60)
	{
		printf("Gectiniz");
	}
	else
	{
		printf("kaldiniz");
	}
	return 0;
}
