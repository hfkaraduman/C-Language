#include <stdio.h>
#define PI 3.14
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int yaricap,cap,yukseklik;
	float hacim,alan;
	
	
	
	printf("Yuksekligi giriniz (cm):");scanf("%d",&yukseklik);
	printf("Capý ðiriniz  (cm):");scanf("%d",&cap);
	printf("Girdi degerleri:yükseklik %d ve cap %d\n",yukseklik,cap);


    yaricap=cap/2;
	
	alan=(PI*yaricap*yaricap);
	
	hacim=(alan*yukseklik)/3;
	
	printf("Dairesel koninin hacmi:%3.2f cm kuptur\n",hacim);



	
	
	return 0;
}
