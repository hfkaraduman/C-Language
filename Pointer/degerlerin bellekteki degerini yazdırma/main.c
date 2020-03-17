#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int sayi=5;
	char harf='H';
	float deger=5.4;
	
	printf("%d\n",sayi);
	printf("%c\n",harf);
	printf("%.1f\n",deger);
	
	printf("**********************\n");
	int *p_sayi=&sayi;
	char *p_harf=&harf;
	float *p_deger=&deger;
	
	
	printf("%p\n",p_sayi);
	printf("%p\n",p_harf);
	printf("%p\n",p_deger);
	
	




	return 0;
}
