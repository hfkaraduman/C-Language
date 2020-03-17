#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float birinci;
	float ikinci;
	float harmonik;
	printf("1.sayiyi giriniz=");scanf("%f",&birinci);
	printf("2.sayiyi giriniz=");scanf("%f",&ikinci);
	harmonik=(2*birinci*ikinci)/(birinci+ikinci);
	printf("Harmonik ortalamasi=%.2f",harmonik);
	return 0;
}
