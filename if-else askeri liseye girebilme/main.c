#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int yas,kilo;
	float vki,boy,boykare;
	printf("Yasinizi giriniz :");scanf("%d",&yas);
	printf("Kilonuzu giriniz  (km):");scanf("%d",&kilo);
	printf("Boyunuzu giriniz  (m):");scanf("%f",&boy);
	printf("----------------\n");
	boykare=boy*boy;
	vki=kilo/boykare;
	printf("Vucut kitle indeksiniz:%2.2f\n",vki);
    if((yas<=17 && yas>=13)&& (vki<=24.99 && vki>=18.5) )
    {
    	printf(" askeri liseye girebilirsiniz");
    }
    else
    {
    	printf("askeri liseye giremezsiniz");
    }
	return 0;
}
