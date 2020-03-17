#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char tur;
	int gun,km,tutar;
	
	printf("Araba Turleri\n");
	printf("(A veya a ) Arazi\n");
	printf("(B veya b ) Binek\n");
	printf("(P veya p )Spor\n");
	printf("-------------------\n");
	printf("Arabanin turu=");scanf("%s",&tur);
	printf("Arabayi kac gun kulandiniz=");scanf("%d",&gun);
	printf("Araba ile kac km yol yaptiniz=");scanf("%d",&km);
	printf("-------------------\n");
	
	
	switch(tur)
	{
		case 'a':
			tutar=(18*km)+(gun*20);
			printf("%d",tutar);
			break;
		case 'b':
		    tutar=(32*gun)+(km*22);
		    printf("%d",tutar);
		
			break;
		case 'p':
		    tutar=(51*gun)+(km*36);
		    printf("%d",tutar);
			break;
		default:
		    printf("Yanlis deger girdiniz");	
			
					
	}
	return 0;
}
