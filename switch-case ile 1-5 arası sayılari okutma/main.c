#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	printf("1-5 arasi bir sayi giriniz:");scanf("%d",&a);
	switch (a)
	{
		case 1:
			printf("bir");
			break;
		case 2:
			printf("iki");
			break;
		case 3:
		    printf("uc");
			break;
		case 4:
		    printf("dort");
			break;
		case 5:
		    printf("bes");
			break;
		default:
		     printf("yanlis deger girdiniz");				
				
	}
	
	return 0;
}
