#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int buyukkenar;
	int kucukkenar;
	float alan;
	printf("Büyükkenar uzunlugu=");scanf("%d",&buyukkenar);
	printf("Küçükkenar uzunlugu=");scanf("%d",&kucukkenar);
	alan=(buyukkenar*kucukkenar)/2;
	printf("Dikdörtgenin alani=%.2f",alan);
	return 0;
}
