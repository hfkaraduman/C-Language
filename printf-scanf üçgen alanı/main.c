#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int taban;
	int yukseklik;
	float alan;
	printf("Ucgenin tabani=");scanf("%d",&taban);
	printf("ucgenin yuksekligi=");scanf("%d",&yukseklik);
	alan=(taban*yukseklik)/2;
	printf("ucgenin alani=%.2f",alan);
    
}
