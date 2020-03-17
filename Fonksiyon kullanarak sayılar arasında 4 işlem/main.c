#include <stdio.h>


int topla(int x,int y)
{
	int sonuc=x+y;
	return sonuc;
}

int cikar(int x,int y)
{
	int sonuc=x-y;
	return sonuc;
}

float bol(float x,float y)
{
	float sonuc=x/y;
	return sonuc;
}

float carp(float x,float y)
{
	float sonuc=x*y;
	return sonuc;
}



int main() 
{
	int a,b;
	printf("2 sayi giriniz:");scanf("%d%d",&a,&b);
	printf("Toplam=%d\n",topla(a,b));
	printf("Fark=%d\n",cikar(a,b));
	printf("Bolum=%.1f\n",bol(a,b));
	printf("Carpim=%.1f",carp(a,b));
}
getch();

